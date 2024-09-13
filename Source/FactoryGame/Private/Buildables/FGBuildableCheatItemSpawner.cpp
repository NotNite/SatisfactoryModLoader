// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableCheatItemSpawner.h"
#include "Net/UnrealNetwork.h"

AFGBuildableCheatItemSpawner::AFGBuildableCheatItemSpawner() : Super() {
	this->mItemRatePeriod = 60.0;
	this->mItemRateLimit = 0.0;
	this->mItemDescriptor = nullptr;
	this->mCurrentItemRate = 0.0;
	this->mCurrentPeriodTime = 0.0;
	this->mTimeSinceLastItemSpawn = 0.0;
}
void AFGBuildableCheatItemSpawner::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableCheatItemSpawner, mItemRateLimit);
	DOREPLIFETIME(AFGBuildableCheatItemSpawner, mItemDescriptor);
}
void AFGBuildableCheatItemSpawner::BeginPlay(){ }
void AFGBuildableCheatItemSpawner::GetConditionalReplicatedProps(TArray<FFGCondReplicatedProperty>& outProps) const{ }
void AFGBuildableCheatItemSpawner::Factory_Tick(float dt){ }
bool AFGBuildableCheatItemSpawner::Factory_PeekOutput_Implementation(const UFGFactoryConnectionComponent* connection, TArray<FInventoryItem>& out_items, TSubclassOf<UFGItemDescriptor> type) const{ return bool(); }
bool AFGBuildableCheatItemSpawner::Factory_GrabOutput_Implementation(UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf<UFGItemDescriptor> type){ return bool(); }
void AFGBuildableCheatItemSpawner::SetItemDescriptor(TSubclassOf<UFGItemDescriptor> itemDescriptor){ }
void AFGBuildableCheatItemSpawner::SetItemRateLimit(float newItemRateLimit){ }
