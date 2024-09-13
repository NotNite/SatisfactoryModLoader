// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResourceSinkSubsystem.h"
#include "Net/UnrealNetwork.h"
#include "Resources/FGItemDescriptor.h"

AFGResourceSinkSubsystem::AFGResourceSinkSubsystem() : Super() {
	this->mCouponClass = nullptr;
	this->mTotalPoints.Emplace();
	this->mTotalPoints.Emplace();
	this->mLastSeenPointLevel.Emplace();
	this->mLastSeenPointLevel.Emplace();
	this->mCurrentPointLevels.Emplace();
	this->mCurrentPointLevels.Emplace();
	this->mGlobalPointHistoryValues.Emplace();
	this->mGlobalPointHistoryValues.Emplace();
	this->mIsCouponEverSunk = false;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 1.0;
}
void AFGResourceSinkSubsystem::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGResourceSinkSubsystem, mTotalPoints);
	DOREPLIFETIME(AFGResourceSinkSubsystem, mCurrentPointLevels);
	DOREPLIFETIME(AFGResourceSinkSubsystem, mNumResourceSinkCoupons);
	DOREPLIFETIME(AFGResourceSinkSubsystem, mGlobalPointHistoryValues);
}
void AFGResourceSinkSubsystem::BeginPlay(){ }
void AFGResourceSinkSubsystem::Tick(float DeltaSeconds){ }
void AFGResourceSinkSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
AFGResourceSinkSubsystem* AFGResourceSinkSubsystem::Get(UWorld* world){ return nullptr; }
AFGResourceSinkSubsystem* AFGResourceSinkSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGResourceSinkSubsystem::SetupRewardLevelData(EResourceSinkTrack ResourceSinkTrack,  UDataTable* rewardLevelsDataTable){ }
void AFGResourceSinkSubsystem::SetupPointData(EResourceSinkTrack ResourceSinkTrack,  UDataTable* pointsDataTable){ }
void AFGResourceSinkSubsystem::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
bool AFGResourceSinkSubsystem::AddPoints_ThreadSafe(TSubclassOf<class UFGItemDescriptor> item){ return bool(); }
int64 AFGResourceSinkSubsystem::GetNumTotalPoints(EResourceSinkTrack resourceSinkTrack) const{ return int64(); }
TArray<int32> AFGResourceSinkSubsystem::GetGlobalPointHistory(EResourceSinkTrack resourceSinkTrack) const{ return TArray<int32>(); }
int64 AFGResourceSinkSubsystem::GetNumPointsToNextCoupon(EResourceSinkTrack resourceSinkTrack) const{ return int64(); }
float AFGResourceSinkSubsystem::GetProgressionTowardsNextCoupon(EResourceSinkTrack resourceSinkTrack) const{ return float(); }
int32 AFGResourceSinkSubsystem::GetCostOfSchematics(TArray< TSubclassOf<  UFGSchematic > > schematics) const{ return int32(); }
bool AFGResourceSinkSubsystem::CanAffordResourceSinkSchematics( UFGInventoryComponent* playerInventory, TArray< TSubclassOf<  UFGSchematic > > schematics) const{ return bool(); }
bool AFGResourceSinkSubsystem::HasTrackGivenCouponSinceLastCheck(EResourceSinkTrack resourceSinkTrack){ return bool(); }
bool AFGResourceSinkSubsystem::PurchaseResourceSinkSchematics( UFGInventoryComponent* playerInventory, TArray< TSubclassOf<  UFGSchematic > > schematics){ return bool(); }
void AFGResourceSinkSubsystem::AddResourceSinkCoupons(int32 numCoupons, bool sendTelemetryData, ECouponSource couponSource){ }
int32 AFGResourceSinkSubsystem::RemoveResourceSinkCoupons(int32 numCoupons){ return int32(); }
int32 AFGResourceSinkSubsystem::GetResourceSinkPointsForItem(TSubclassOf<  UFGItemDescriptor > itemDescriptor){ return int32(); }
bool AFGResourceSinkSubsystem::FindResourceSinkPointsForItem(TSubclassOf<  UFGItemDescriptor > itemDescriptor, int32& out_numPoints, EResourceSinkTrack& out_itemTrack){ return bool(); }
void AFGResourceSinkSubsystem::HandleQueuedPoints(){ }
void AFGResourceSinkSubsystem::HandleQueuedFailedItems(){ }
void AFGResourceSinkSubsystem::InitCouponClass(){ }
void AFGResourceSinkSubsystem::CalculateLevel(){ }
int32 AFGResourceSinkSubsystem::GetCurrentPointLevel(EResourceSinkTrack resourceSinkTrack) const{ return int32(); }
int64 AFGResourceSinkSubsystem::GetRequiredPointsForLevel(EResourceSinkTrack resourceSinkTrack, int32 level) const{ return int64(); }
void AFGResourceSinkSubsystem::CalculateAccumulatedPointsPastInterval(){ }
void AFGResourceSinkSubsystem::TriggerCyberCoupon(){ }
void AFGResourceSinkSubsystem::TriggerCustomReward(TSubclassOf<  UFGItemDescriptor> item){ }
int32 AFGResourceSinkSubsystem::GetNumTotalCouponsFromSource(ECouponSource couponSource) const{ return int32(); }
