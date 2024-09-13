// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGChainsaw.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AFGChainsaw::AFGChainsaw() : Super() {
	this->mFuelClass = nullptr;
	this->mEnergyConsumption = 3.0;
	this->mSawDownTreeTime = 2.0;
	this->mCollateralPickupRadius = 200.0;
	this->mIsAOEOn = false;
	this->mChainsawNoise = nullptr;
	this->mEnergyStored = 0.0;
	this->mSawingProgress = 0.0;
	this->mSawingComponent = nullptr;
	this->mChainsawState = EFGChainsawState::None;
	this->mArmAnimation = EArmEquipment::AE_ChainSaw;
	this->mDefaultEquipmentActions = 1;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
void AFGChainsaw::Tick(float dt){ }
void AFGChainsaw::LoadFromItemState_Implementation(const FFGDynamicStruct& itemState){ }
FFGDynamicStruct AFGChainsaw::SaveToItemState_Implementation() const{ return FFGDynamicStruct(); }
void AFGChainsaw::DisableEquipment(){ }
void AFGChainsaw::Equip(AFGCharacterPlayer* character){ }
void AFGChainsaw::UnEquip(){ }
void AFGChainsaw::AddEquipmentActionBindings(){ }
void AFGChainsaw::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGChainsaw, mIsAOEOn);
	DOREPLIFETIME(AFGChainsaw, mEnergyStored);
	DOREPLIFETIME(AFGChainsaw, mChainsawState);
}
bool AFGChainsaw::IsSawEngaged() const{ return bool(); }
bool AFGChainsaw::IsSawing() const{ return bool(); }
bool AFGChainsaw::IsSpinningUp() const{ return bool(); }
bool AFGChainsaw::DoesPlayerHaveChainsawEquipped( AFGCharacterPlayer* player){ return bool(); }
bool AFGChainsaw::HasAnyFuel() const{ return bool(); }
void AFGChainsaw::HandleDefaultEquipmentActionEvent(EDefaultEquipmentAction action, EDefaultEquipmentActionEvent actionEvent){ }
bool AFGChainsaw::IsSpinningUpTransitionFinished_Implementation() const{ return bool(); }
void AFGChainsaw::OnChainsawStateTransition_Implementation(const EFGChainsawState oldState){ }
bool AFGChainsaw::ConsumeFuel(float dt){ return bool(); }
void AFGChainsaw::StartSawing(){ }
void AFGChainsaw::Server_StartSawing_Implementation(){ }
bool AFGChainsaw::Server_StartSawing_Validate(){ return bool(); }
void AFGChainsaw::Server_ToggleAOE_Implementation(const bool isAOEOn){ }
void AFGChainsaw::StopSawing(){ }
void AFGChainsaw::Server_RemoveFoliageInstance_Implementation(const  FFoliageInstanceStableId& stableId, const FVector& effectLocation, const FTransform& instanceTransform){ }
void AFGChainsaw::RemoveFoliageInstance(const  FFoliageInstanceStableId& stableId, const FVector& effectLocation, const FTransform& instanceTransform){ }
void AFGChainsaw::Server_RemoveChainsawableObject_Implementation(const TScriptInterface<IFGChainsawableInterface> &chainsawableObject){ }
void AFGChainsaw::RemoveChainsawableObject(TScriptInterface<IFGChainsawableInterface> chainsawableObject){ }
void AFGChainsaw::RemoveCollateralFoliage( AFGFoliageRemovalSubsystem* removalSubsystem, const FVector& location){ }
void AFGChainsaw::BroadcastPickup_Implementation(const TArray<FPickedUpInstance>& pickups,  AFGFoliagePickup* instigatorPlayer){ }
void AFGChainsaw::Server_StopSawing_Implementation(){ }
bool AFGChainsaw::Server_StopSawing_Validate(){ return bool(); }
void AFGChainsaw::StartNewSawing( USceneComponent* sawingComponent, int32 newIndex){ }
bool AFGChainsaw::IsValidSawing( USceneComponent* sawingComponent, int32 newIndex) const{ return bool(); }
bool AFGChainsaw::CanPlayerPickupFoliageResourceForSeeds( UHierarchicalInstancedStaticMeshComponent* meshComponent, const TArrayView< uint32 > seeds, TArray<FInventoryStack>& out_validStacks){ return bool(); }
UStaticMesh* AFGChainsaw::GetStaticMesh(USceneComponent* sawingComponent){ return nullptr; }
bool AFGChainsaw::IsChainsawableObject(UObject* object) const{ return bool(); }
void AFGChainsaw::TransitionToNewState(const EFGChainsawState newState){ }
void AFGChainsaw::Server_TransitionToNewState_Implementation(EFGChainsawState newState){ }
void AFGChainsaw::OnRep_ChainsawState(EFGChainsawState oldState){ }
void AFGChainsaw::Input_Toggle(const FInputActionValue& actionValue){ }
