// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGProductionIndicatorInstanceComponent.h"

UFGProductionIndicatorInstanceComponent::UFGProductionIndicatorInstanceComponent() : Super() {
	this->mStateNoneData.mColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mStateActiveData.mColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mStateActiveWithCrystalData.mColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mStateErrorData.mColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mStateStandbyData.mColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mBlockColoring = true;
	this->mNumCustomDataFloats = 4;
	this->CachedMaxDrawDistance = 150000.0;
	this->bAffectDistanceFieldLighting = false;
}
void UFGProductionIndicatorInstanceComponent::OnProductionStatusChanged(EProductionStatus newStatus){ }
void UFGProductionIndicatorInstanceComponent::ForceUpdateVisuals(){ }
void UFGProductionIndicatorInstanceComponent::SetVisuals(EProductionStatus newStatus){ }
