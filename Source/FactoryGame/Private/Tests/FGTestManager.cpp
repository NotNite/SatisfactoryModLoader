// This file has been automatically generated by the Unreal Header Implementation tool

#include "Tests/FGTestManager.h"
#include "Components/SceneComponent.h"
#include "FGPowerConnectionComponent.h"
#include "FGPowerInfoComponent.h"

AFGTestManager::AFGTestManager() : Super() {
	this->mDefaultTestMap = FSoftObjectPath("/Game/FactoryGame/Map/TestMapFactoryGame.TestMapFactoryGame");
	this->mDefaultTestMapOptions = TEXT("?skipOnboarding?allowPossessAny");
	this->mCheatPowerSourcePowerInfo = CreateDefaultSubobject<UFGPowerInfoComponent>(TEXT("CheatPowerSource"));
	this->mCheatPowerSinkPowerInfo = CreateDefaultSubobject<UFGPowerInfoComponent>(TEXT("CheatPowerSink"));
	this->mCheatPowerSourceConnection = CreateDefaultSubobject<UFGPowerConnectionComponent>(TEXT("PowerSourceConnection"));
	this->mCheatPowerSinkConnection = CreateDefaultSubobject<UFGPowerConnectionComponent>(TEXT("PowerSinkConnection"));
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bReplicates = false;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	this->mCheatPowerSourceConnection->SetupAttachment(RootComponent);
	this->mCheatPowerSinkConnection->SetupAttachment(RootComponent);
}
void AFGTestManager::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTestManager::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTestManager::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTestManager::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTestManager::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGTestManager::NeedTransform_Implementation(){ return bool(); }
bool AFGTestManager::ShouldSave_Implementation() const{ return bool(); }
AFGTestManager* AFGTestManager::Get(const UObject* worldContext){ return nullptr; }
bool AFGTestManager::ShouldSpawnForWorld(const UWorld* world){ return bool(); }
FString AFGTestManager::GetWorldGameplayTestName(const UWorld* world){ return FString(); }
void AFGTestManager::BeginPlay(){ }
void AFGTestManager::Tick(float DeltaSeconds){ }
void AFGTestManager::DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos){ }
UFGGameplayTest* AFGTestManager::RunGameplayTest(TSubclassOf<UFGGameplayTest> gameplayTest){ return nullptr; }
void AFGTestManager::GetRunningGameplayTests(TArray<UFGGameplayTest*>& out_gameplayTests) const{ }
void AFGTestManager::RegisterTestManufacturer(const FFGTestBuildableDescriptor_Manufacturer& manufacturerData){ }
void AFGTestManager::RegisterTestGenerator(const FFGTestBuildableDescriptor_GeneratorFuel& generatorData){ }
TSubclassOf<UFGGameplayTest> AFGTestManager::FindGameplayTestByName(const FString& gameplayTestName){ return TSubclassOf<UFGGameplayTest>(); }
void AFGTestManager::ScanForGameplayTests(EFGGameplayTestFlags FilterFlags, TArray<TSubclassOf<UFGGameplayTest>>& out_gameplayTests){ }
void AFGTestManager::OnGameplayTestStateChanged(UFGGameplayTest* gameplayTest) const{ }
void AFGTestManager::TickTestManufacturers() const{ }
void AFGTestManager::TickTestGenerators() const{ }
void AFGTestManager::TickPowerInfo() const{ }
void AFGTestManager::TickGameplayTests(float dt){ }
void AFGTestManager::SaturateInventorySlot( UFGInventoryComponent* inventoryComponent, int32 slotIndex, TSubclassOf<UFGItemDescriptor> itemDescriptor){ }
