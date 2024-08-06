#include "Registry/ContentTagRegistry.h"
#include "Registry/SMLExtendedAttributeProvider.h"

#include "ModLoading/PluginModuleLoader.h"

DEFINE_LOG_CATEGORY(LogContentTagRegistry);

FFrame* UContentTagRegistry::ActiveScriptFramePtr{};

/** Makes sure provided object instance is valid, crashes with both script call stack and native stack trace if it's not */
#define NOTIFY_INVALID_REGISTRATION(Context) \
	{ \
		/* Attempt to use cached script frame pointer first, then fallback to global script callstack (which is not available in shipping by default) */ \
		const FString ScriptCallstack = UContentTagRegistry::GetCallStackContext(); \
		UE_LOG(LogContentTagRegistry, Error, TEXT("Attempt to modify content tags failed: %s"), Context); \
		UE_LOG(LogContentTagRegistry, Error, TEXT("Script Callstack: %s"), *ScriptCallstack); \
		ensureMsgf( false, TEXT("%s"), *Context ); \
	} \

UContentTagRegistry::UContentTagRegistry() {
}

UContentTagRegistry* UContentTagRegistry::Get(const UObject* WorldContext) {
	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::ReturnNull)) {
		return World->GetSubsystem<UContentTagRegistry>();
	}
	return nullptr;
}

const FGameplayTagContainer UContentTagRegistry::GetGameplayTagContainerFor(UClass* content) {
	// Return a copy because the container pointer returned by Find()
	// is only valid until the next change to any map key.
	FGameplayTagContainer toReturn;
	const auto record = GetOrInitContainerFor(content);
	if (record) {
		toReturn.AppendTags(*record);
	}
	return toReturn;
}

bool UContentTagRegistry::CanModifyTagsOf(const UClass* content, FString& OutMessage) {
	if (bRegistryFrozen) {
		OutMessage = FString::Printf(TEXT("Attempt to modify content tags of object '%s' in frozen registry. Make sure your tag changes are happening in the 'Initialization' Lifecycle Phase and not 'Post Initialization'. TODO update this message with the timing we decide on."), *GetPathNameSafe(content));
		return false;
	}
	if (!IsValid(content)) {
		OutMessage = FString::Printf(TEXT("Attempt to modify content tags of an invalid object."));
		return false;
	}
	return true;
}

void UContentTagRegistry::InternalAddGameplayTagsTo(UClass* content, const FGameplayTagContainer tags) {
	auto record = GetOrInitContainerFor(content);
	UE_LOG(LogContentTagRegistry, Verbose, TEXT("Adding tags %s for class %s"), *tags.ToString(), *GetFullNameSafe(content));
	record->AppendTags(tags);
}

FGameplayTagContainer* UContentTagRegistry::GetOrInitContainerFor(UClass* content) {
	// TODO refactor to avoid double lookup (contains then find?)
	if (!TagContainerRegistry.Contains(content)) {
		UE_LOG(LogContentTagRegistry, Verbose, TEXT("First access of tags for class %s so checking for Extended Attribute Provider tags"), *GetFullNameSafe(content));
		auto tagsFromProvider = GetTagsFromExtendedAttributeProvider(content);
		UE_LOG(LogContentTagRegistry, Verbose, TEXT("Adding tags from provider %s for class %s"), *tagsFromProvider.ToString(), *GetFullNameSafe(content));
		FGameplayTagContainer freshContainer;
		freshContainer.AppendTags(tagsFromProvider);
		TagContainerRegistry.Add(content, freshContainer);
	}
	return TagContainerRegistry.Find(content);
}

void UContentTagRegistry::AddGameplayTagsTo(UClass* content, const FGameplayTagContainer tags) {
	FString Context;
	if (!CanModifyTagsOf(content, Context)) {
		NOTIFY_INVALID_REGISTRATION(*Context);
		return;
	}
	InternalAddGameplayTagsTo(content, tags);
}

void UContentTagRegistry::RemoveGameplayTagsFrom(UClass* content, const FGameplayTagContainer tags) {
	FString Context;
	if (!CanModifyTagsOf(content, Context)) {
		NOTIFY_INVALID_REGISTRATION(*Context);
		return;
	}
	auto record = GetOrInitContainerFor(content);
	UE_LOG(LogContentTagRegistry, Verbose, TEXT("Removing tags %s from class %s"), *tags.ToString(), *GetFullNameSafe(content));
	record->RemoveTags(tags);
}

FGameplayTagContainer UContentTagRegistry::GetTagsFromExtendedAttributeProvider(UClass* content) {
	if (auto asInterface = Cast<ISMLExtendedAttributeProvider>(content)) {
		return asInterface->GetRequestedGameplayTags();
	}
	return FGameplayTagContainer::EmptyContainer;
}

void UContentTagRegistry::FreezeRegistry() {
	UE_LOG(LogContentTagRegistry, Verbose, TEXT("Freezing content tag registry"));
	bRegistryFrozen = true;
}

bool UContentTagRegistry::ShouldCreateSubsystem(UObject* Outer) const {
	UWorld* WorldOuter = CastChecked<UWorld>(Outer);
	return FPluginModuleLoader::ShouldLoadModulesForWorld(WorldOuter);
}

void UContentTagRegistry::OnActorPreSpawnInitialization(AActor* Actor) {
	OnWorldBeginPlayDelegate.AddWeakLambda(this, [&]() {
		FreezeRegistry();
	});
}

void UContentTagRegistry::OnWorldBeginPlay(UWorld& InWorld) {
	OnWorldBeginPlayDelegate.Broadcast();
}

FString UContentTagRegistry::GetCallStackContext() {
	// Prefer script callstack to the native one
	if (ActiveScriptFramePtr != nullptr) {
		return ActiveScriptFramePtr->Node->GetPathName();
	}

	// Attempt to capture stack trace
	TArray<FProgramCounterSymbolInfo> NativeStackTrace = FPlatformStackWalk::GetStack(1, 10);
	if (NativeStackTrace.IsEmpty()) {
		FProgramCounterSymbolInfo& Info = NativeStackTrace.Emplace_GetRef();
		TCString<ANSICHAR>::Strcpy(Info.Filename, FProgramCounterSymbolInfo::MAX_NAME_LENGTH, "Unknown");
		Info.LineNumber = 1;
	}

	// Find first frame that does not contain internal logic of content registry
	int32 FirstExternalFrameIndex = 0;
	while (FirstExternalFrameIndex + 1 < NativeStackTrace.Num() &&
		FCStringAnsi::Strifind(NativeStackTrace[FirstExternalFrameIndex].Filename, __FILE__) != nullptr) {
		FirstExternalFrameIndex++;
	}
	return FString::Printf(TEXT("%hs:%d"), NativeStackTrace[FirstExternalFrameIndex].Filename, NativeStackTrace[FirstExternalFrameIndex].LineNumber);
}
