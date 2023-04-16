#include "SatisfactoryModLoader.h"
#include "FGPlayerController.h"
#include "Configuration/ConfigManager.h"
#include "Tooltip/ItemTooltipSubsystem.h"
#include "Registry/ModContentRegistry.h"
#include "Network/NetworkHandler.h"
#include "Registry/RemoteCallObjectRegistry.h"
#include "Network/SMLConnection/SMLNetworkManager.h"
#include "Patching/Patch/CheatManagerPatch.h"
#include "Player/SMLRemoteCallObject.h"
#include "Patching/Patch/SaveMetadataPatch.h"
#include "Player/PlayerCheatManagerHandler.h"
#include "Util/DebuggerHelper.h"

#ifndef SML_BUILD_METADATA
#define SML_BUILD_METADATA "unknown"
#endif

extern "C" DLLEXPORT const TCHAR* modLoaderVersionString = TEXT("3.4.1+") TEXT(SML_BUILD_METADATA);
extern "C" DLLEXPORT const long targetGameVersion = 208572;

DEFINE_LOG_CATEGORY(LogSatisfactoryModLoader);

TSharedPtr<FModHandler> FSatisfactoryModLoader::ModHandlerPrivate = NULL;
FSMLConfiguration FSatisfactoryModLoader::SMLConfigurationPrivate;

FVersion FSatisfactoryModLoader::GetModLoaderVersion() {
    static FVersion* ModLoaderVersion = NULL;
    if (ModLoaderVersion == NULL) {
        FString OutErrorMessage;
        ModLoaderVersion = new FVersion();
        ModLoaderVersion->ParseVersion(modLoaderVersionString, OutErrorMessage);
    }
    return *ModLoaderVersion;
}

TMap<FName, FString> FSatisfactoryModLoader::GetExtraAttributes() {
    TMap<FName, FString> OutExtraAttributes;
    return OutExtraAttributes;
}

void FSatisfactoryModLoader::LoadSMLConfiguration(bool bAllowSave) {
    const FString ConfigLocation = UConfigManager::GetConfigurationFilePath(FConfigId{TEXT("SML")});
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    bool bShouldWriteConfiguration = false;
    
    if (PlatformFile.FileExists(*ConfigLocation)) {
        FString RawSMLConfiguration;
        if (FFileHelper::LoadFileToString(RawSMLConfiguration, *ConfigLocation)) {
            
            TSharedPtr<FJsonObject> OutJsonObject;
            const TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(RawSMLConfiguration);
            
            if (FJsonSerializer::Deserialize(JsonReader, OutJsonObject)) {
                FSMLConfiguration::ReadFromJson(OutJsonObject, SMLConfigurationPrivate, &bShouldWriteConfiguration);
                UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Successfully loaded SML configuration from disk"));
                
            } else {
                UE_LOG(LogSatisfactoryModLoader, Warning, TEXT("Failed to load SML configuration, JSON is malformed"));
                bShouldWriteConfiguration = true;
            }
        } else {
            UE_LOG(LogSatisfactoryModLoader, Error, TEXT("Failed to load SML configuration from %s"), *ConfigLocation);   
        }
    } else {
        UE_LOG(LogSatisfactoryModLoader, Display, TEXT("SML configuration file is missing, saving new one"));
        bShouldWriteConfiguration = true;
    }

    if (bShouldWriteConfiguration) {
        const TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
        FSMLConfiguration::WriteToJson(JsonObject, SMLConfigurationPrivate);

        FString OutSerializedConfiguration;
        const TSharedRef<TJsonWriter<>> JsonWriter = TJsonWriterFactory<>::Create(&OutSerializedConfiguration);
        FJsonSerializer::Serialize(JsonObject, JsonWriter);

        //Make sure configuration directory exists
        FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*FPaths::GetPath(ConfigLocation));

        //Write file onto the disk now
        if (FFileHelper::SaveStringToFile(OutSerializedConfiguration, *ConfigLocation)) {
            UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Successfully saved SML configuration"));
        } else {
            UE_LOG(LogSatisfactoryModLoader, Error, TEXT("Failed to save SML configuration to %s"), *ConfigLocation);
        }
    }
}

void FSatisfactoryModLoader::CheckGameVersion() {
    const uint32 CurrentChangelist = FEngineVersion::Current().GetChangelist();
    const uint32 MinChangelistSupported = (uint32) targetGameVersion;
    
    if (!(CurrentChangelist >= MinChangelistSupported)) {
        UE_LOG(LogSatisfactoryModLoader, Fatal, TEXT("Game version check failed: Game version is %d, but this SML version is built for %d"), CurrentChangelist, MinChangelistSupported);
    }
    UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Version check passed successfully! Game Changelist: %d"), CurrentChangelist);
}

void FSatisfactoryModLoader::RegisterSubsystemPatches() {
    //Disable vanilla content resolution by patching vanilla lookup methods
    AModContentRegistry::DisableVanillaContentRegistration();

    //Register remote call object registry hook
    URemoteCallObjectRegistry::InitializePatches();
    
    //Register SML chat commands subsystem patch (should actually be in CommandSubsystem i guess)
    USMLRemoteCallObject::RegisterChatCommandPatch();

    //Initialize network manager handling mod packets
    UModNetworkHandler::InitializePatches();

    //Initialize tooltip handler
    UItemTooltipSubsystem::InitializePatches();

    //Register save metadata patch to enable storing a save's mod list and other mod-specified metadata
    FSaveMetadataPatch::RegisterPatch();

    //Only register these patches in shipping, where bodies of the ACharacter::Cheat methods are stripped
#if UE_BUILD_SHIPPING
    FCheatManagerPatch::RegisterPatch();
#endif
}

void FSatisfactoryModLoader::RegisterSubsystems() {
    //Register cheat manager handling, allowing access to cheat commands if desired
    FPlayerCheatManagerHandler::RegisterHandler();

    //Register version checker for remote connections
    FSMLNetworkManager::RegisterMessageTypeAndHandlers();
}

void FSatisfactoryModLoader::PreInitializeModLoading() {
    UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Satisfactory Mod Loader v.%s pre-initializing..."), modLoaderVersionString);
    UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Build Date: %s %s"), ANSI_TO_TCHAR(__DATE__), ANSI_TO_TCHAR(__TIME__));

    //Don't try to save configuration in the editor, because it will make new folders for no real reason
    const bool bAllowSavingConfiguration = FPlatformProperties::RequiresCookedData();
    LoadSMLConfiguration(bAllowSavingConfiguration);

#if UE_BUILD_SHIPPING
    //Wait for the debugger if prompted
    //We need to manually do that in shipping because the normal UE code is stripped
    if (FParse::Param(FCommandLine::Get(), TEXT("WaitForDebugger"))) {
        UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Waiting for the debugger to attach as prompted..."));

        FSlowHeartBeatScope SuspendHeartBeat(true);
        while (!FDebuggerHelper::IsDebuggerPresent()) {
            FPlatformProcess::Sleep(0.1f);
        }
        UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Debugger attached"));
        FDebuggerHelper::DebugBreak();
    }

    //Add hooks to break into the debugger on ensure and error
    if (FParse::Param(FCommandLine::Get(), TEXT("BreakIntoDebuggerOnErrorAndEnsure"))) {
        FCoreDelegates::OnHandleSystemEnsure.AddLambda([]() {
            if (FDebuggerHelper::IsDebuggerPresent()) {
                FDebuggerHelper::DebugBreak();
            }
        });
        FCoreDelegates::OnHandleSystemError.AddLambda([]() {
            if (FDebuggerHelper::IsDebuggerPresent()) {
                FDebuggerHelper::DebugBreak();
            }
        });
    }

    if (FParse::Param(FCommandLine::Get(), TEXT("TestDebugBreakOnEnsure"))) {
        ensureMsgf(false, TEXT("Test failed ensure"));
    }
#endif

    //Check game version only on shipping platform, because in editor builds
    //changelist number is not actually correctly set, since it is built from scratch
    if (FPlatformProperties::RequiresCookedData()) {
        CheckGameVersion();
    }
    
    UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Pre-initialization finished!"));
}

void FSatisfactoryModLoader::InitializeModLoading() {
    UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Performing mod loader initialization"));

    //Install patches, but only do it in shipping for now because most of them involve FactoryGame code and
    //we currently do not have FG code available in the editor
    if (FPlatformProperties::RequiresCookedData()) {
        UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Registering subsystem patches..."));
        RegisterSubsystemPatches();
    }
    
    //Setup SML subsystems and custom content registries
    UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Registering global subsystems..."));
    RegisterSubsystems();

    UE_LOG(LogSatisfactoryModLoader, Display, TEXT("Initialization finished!"));
}