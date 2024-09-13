// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableStair.h"
#include "Hologram/FGStairHologram.h"

AFGBuildableStair::AFGBuildableStair() : Super() {
	this->mStairDirection = EBuildableStairDirection::EBSD_Right;
	this->mHeight = 0.0;
	this->mSize = 0.0;
	this->mHologramClass = AFGStairHologram::StaticClass();
	this->mManagedByLightweightBuildableSubsystem = true;
}
