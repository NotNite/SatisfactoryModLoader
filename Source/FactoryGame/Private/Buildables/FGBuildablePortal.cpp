// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePortal.h"
#include "FGInventoryComponent.h"
#include "Net/UnrealNetwork.h"

AFGBuildablePortal::AFGBuildablePortal() : Super() {
	this->mFuelItemClass = nullptr;
	this->mPortalDisconnectedCooldownTime = 5.0;
	this->mFuelInventory = CreateDefaultSubobject<UFGInventoryComponent>(TEXT("FuelInventory"));
	this->mHeatUpComplete = false;
	this->mHeatUpCycleTime = 0.0;
	this->mHeatUpFuelConsumptionCurve = nullptr;
	this->mHeatUpPowerConsumptionCurve = nullptr;
	this->mCurrentHeatUpProgress = 0.0;
	this->mCurrentProductionProgress = 0.0;
	this->mLinkedPortalDisconnectCooldownTimeLeft = 0.0;
	this->mCurrentProductionCycleTime = 0.0;
	this->mTrippedProductionStop = false;
	this->mCachedHasEnoughFuelForProduce = false;
}
void AFGBuildablePortal::PostInitProperties(){ Super::PostInitProperties(); }
void AFGBuildablePortal::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildablePortal, mHeatUpComplete);
	DOREPLIFETIME(AFGBuildablePortal, mCurrentHeatUpProgress);
}
void AFGBuildablePortal::GetConditionalReplicatedProps(TArray<FFGCondReplicatedProperty>& outProps) const{ }
void AFGBuildablePortal::BeginPlay(){ }
void AFGBuildablePortal::Factory_Tick(float dt){ }
void AFGBuildablePortal::Factory_CollectInput_Implementation(){ }
bool AFGBuildablePortal::CanProduce_Implementation() const{ return bool(); }
float AFGBuildablePortal::GetDefaultProductionCycleTime() const{ return float(); }
float AFGBuildablePortal::GetProductionCycleTime() const{ return float(); }
float AFGBuildablePortal::CalcProductionCycleTimeForPotential(float potential) const{ return float(); }
float AFGBuildablePortal::GetProductionProgress() const{ return float(); }
void AFGBuildablePortal::Factory_StartProducing(){ }
void AFGBuildablePortal::Factory_StopProducing(){ }
void AFGBuildablePortal::Factory_TickProducing(float dt){ }
void AFGBuildablePortal::Factory_ProductionCycleCompleted(float overProductionRate){ }
bool AFGBuildablePortal::Factory_TryConsumeFuel(){ return bool(); }
bool AFGBuildablePortal::Factory_StartProductionCycle(float overProduction){ return bool(); }
void AFGBuildablePortal::Factory_UpdateCachedHasFuelForProduction(){ }
void AFGBuildablePortal::Factory_HeatUpCycleCompleted(){ }
EFGPortalLinkCandidateState AFGBuildablePortal::CanLinkToPortal(AFGBuildablePortalBase* otherPortal) const{ return EFGPortalLinkCandidateState(); }
float AFGBuildablePortal::GetMaximumPowerConsumption() const{ return float(); }
void AFGBuildablePortal::FillCachedFactoryTickData(FFGPortalCachedFactoryTickData& out_cachedData) const{ }
float AFGBuildablePortal::GetProducingPowerConsumptionBase_ForPortal() const{ return float(); }
void AFGBuildablePortal::OnLinkedPortalDisconnected(){ }
void AFGBuildablePortal::OnFuelInventorySlotUpdated(const int32 index){ }
void AFGBuildablePortal::StopProducing_MainThread(){ }
void AFGBuildablePortal::HeatUpCycleCompleted_MainThread(){ }
void AFGBuildablePortal::OnRep_HeatUpComplete(){ }
