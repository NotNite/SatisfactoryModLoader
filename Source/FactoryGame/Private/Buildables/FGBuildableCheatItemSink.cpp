// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableCheatItemSink.h"

AFGBuildableCheatItemSink::AFGBuildableCheatItemSink() : Super() {
	this->mItemRatePeriod = 60.0;
	this->mCurrentItemRate = 0.0;
	this->mCurrentPeriodTime = 0.0;
}
void AFGBuildableCheatItemSink::BeginPlay(){ }
void AFGBuildableCheatItemSink::GetConditionalReplicatedProps(TArray<FFGCondReplicatedProperty>& outProps) const{ }
void AFGBuildableCheatItemSink::Factory_Tick(float dt){ }
void AFGBuildableCheatItemSink::Factory_CollectInput_Implementation(){ }
