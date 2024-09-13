// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSchematicManager.h"
#include "Net/UnrealNetwork.h"

#if WITH_EDITORONLY_DATA
#endif 
AFGSchematicManager* AFGSchematicManager::Get(UWorld* world){ return nullptr; }
AFGSchematicManager* AFGSchematicManager::Get(UObject* worldContext){ return nullptr; }
int32 AFGSchematicManager::GetTechTier(const FAssetData& schematicAsset){ return int32(); }
EIncludeInBuilds AFGSchematicManager::GetIncludedInBuild(const FAssetData& schematicAsset){ return EIncludeInBuilds(); }
AFGSchematicManager::AFGSchematicManager() : Super() {
	this->mActiveSchematic = nullptr;
	this->mLastActiveSchematic = nullptr;
	this->mShipLandTimeStamp = -1.0;
	this->mShipLandTimeStampSave = 0.0;
	this->mHasTechTierLimit = false;
	this->mMaxAllowedTechTier = 6;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.1;
}
void AFGSchematicManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGSchematicManager, mPurchasedSchematics);
	DOREPLIFETIME(AFGSchematicManager, mPaidOffSchematic);
	DOREPLIFETIME(AFGSchematicManager, mActiveSchematic);
	DOREPLIFETIME(AFGSchematicManager, mShipLandTimeStamp);
}
void AFGSchematicManager::PreInitializeComponents(){ Super::PreInitializeComponents(); }
void AFGSchematicManager::BeginPlay(){ }
void AFGSchematicManager::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGSchematicManager::Tick(float dt){ }
void AFGSchematicManager::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSchematicManager::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSchematicManager::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSchematicManager::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSchematicManager::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGSchematicManager::NeedTransform_Implementation(){ return bool(); }
bool AFGSchematicManager::ShouldSave_Implementation() const{ return bool(); }
void AFGSchematicManager::GetAvailableSchematicsOfTypes(TArray<ESchematicType> types, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAvailableNonPurchasedSchematicsOfTypes(TArray<ESchematicType> types, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetPurchasedSchematicsOfTypes(TArray<ESchematicType> types, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllPurchasedSchematics(TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllSchematics(TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllSchematicsOfType(ESchematicType type, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllSchematicsOfTypeFilteredOnDependency(ESchematicType type, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllVisibleSchematicsOfType(ESchematicType type, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetHubSchematicsForTier(int32 tier, TArray<TSubclassOf<UFGSchematic>>& out_schematics) const{ }
bool AFGSchematicManager::IsSchematicPurchased(TSubclassOf< UFGSchematic > schematicClass, APlayerController* owningPlayerController) const{ return bool(); }
void AFGSchematicManager::GiveAccessToSchematic(TSubclassOf< UFGSchematic > schematicClass,  AFGCharacterPlayer* accessInstigator, bool blockTelemetry , bool bBypassAccessChecks){ }
void AFGSchematicManager::GiveAccessToSchematics(const TArray< TSubclassOf< UFGSchematic > >& schematicClasses,  AFGCharacterPlayer* accessInstigator, bool blockTelemetry , bool bBypassAccessChecks){ }
TArray< FItemAmount > AFGSchematicManager::GetCostFor(TSubclassOf< UFGSchematic > schematic){ return TArray<FItemAmount>(); }
TArray< FItemAmount > AFGSchematicManager::GetRemainingCostFor(TSubclassOf< UFGSchematic > schematic){ return TArray<FItemAmount>(); }
TArray< FItemAmount > AFGSchematicManager::GetPaidOffCostFor(TSubclassOf< UFGSchematic > schematic){ return TArray<FItemAmount>(); }
bool AFGSchematicManager::IsSchematicPaidOff(TSubclassOf< UFGSchematic > schematic){ return bool(); }
bool AFGSchematicManager::PayOffOnSchematic(TSubclassOf< UFGSchematic > schematic,  TArray< FItemAmount >& amount){ return bool(); }
bool AFGSchematicManager::SetActiveSchematic(TSubclassOf<  UFGSchematic > newActiveSchematic){ return bool(); }
bool AFGSchematicManager::CanSetAsActiveSchematic(TSubclassOf< UFGSchematic > inSchematic){ return bool(); }
void AFGSchematicManager::LaunchShip( AFGCharacterPlayer* accessInstigator){ }
bool AFGSchematicManager::IsShipAtTradingPost(){ return bool(); }
float AFGSchematicManager::GetTimeUntilShipReturn(){ return float(); }
void AFGSchematicManager::Multicast_OnShipReturned_Implementation(){ }
int32 AFGSchematicManager::GetHighestAvailableTechTier(){ return int32(); }
int32 AFGSchematicManager::GetDefaultMaxAllowedTechTier(){ return int32(); }
int32 AFGSchematicManager::GetMaxAllowedTechTier() const{ return int32(); }
void AFGSchematicManager::ResetSchematicsOfType(ESchematicType type){ }
TSubclassOf< class UFGRecipe > AFGSchematicManager::FixupSave_FindBuiltByRecipe(AActor* forActor){ return TSubclassOf<class UFGRecipe>(); }
void AFGSchematicManager::Debug_DumpStateToLog() const{ }
TArray< TSubclassOf< class UFGRecipe > > AFGSchematicManager::Debug_GetAllRecipes() const{ return TArray<TSubclassOf<class UFGRecipe> >(); }
void AFGSchematicManager::Cheat_GiveAllSchematics(){ }
bool AFGSchematicManager::CanGiveAccessToSchematic(TSubclassOf< UFGSchematic > schematic) const{ return bool(); }
void AFGSchematicManager::GetVisibleSchematicCategoryData(ESchematicType schematicType, TArray< FSchematicCategoryData >& out_schematicCategoryData){ }
void AFGSchematicManager::UnlockAllSchematicsOfType(ESchematicType schematicType, bool requireDependency){ }
void AFGSchematicManager::UnlockSchematicsUpToTier(int32 tier){ }
ETechTierState AFGSchematicManager::GetTechTierState(int32 tier) const{ return ETechTierState(); }
void AFGSchematicManager::PopulateSchematicsLists(){ }
void AFGSchematicManager::OnRep_ActiveSchematic(){ }
void AFGSchematicManager::OnRep_PurchasedSchematic(TArray< TSubclassOf< UFGSchematic > > lastPurchasedSchematics){ }
void AFGSchematicManager::OnRep_PaidOffOnSchematic(){ }
int32 AFGSchematicManager::FindHighestAvailableTechTier(){ return int32(); }
FSchematicCost* AFGSchematicManager::FindSchematicPayOff(TSubclassOf<  UFGSchematic > schematic){ return nullptr; }
void AFGSchematicManager::AddSchematicPayOff(TSubclassOf<  UFGSchematic > schematic, const TArray< FItemAmount >& amount){ }
void AFGSchematicManager::RemoveSchematicPayOff(TSubclassOf<  UFGSchematic > schematic){ }
void AFGSchematicManager::SubmitUnlockSchematicTelemetry(TSubclassOf< UFGSchematic > schematicClass){ }
void AFGSchematicManager::SubmitMilestoneTelemetry(TSubclassOf< UFGSchematic > activeSchematic){ }
void AFGSchematicManager::TryUnlockNewSchematicsOfType(const FString& userSettingStrID, FTimerHandle& timerHandle, ESchematicType schematicType){ }
void AFGSchematicManager::Internal_TryUnlockNewSchematicsOfType(ESchematicType schematicType){ }
