// This file has been automatically generated by the Unreal Header Implementation tool

#include "Resources/FGResourceNodeFrackingSatellite.h"
#include "Net/UnrealNetwork.h"
#include "Resources/FGResourceNodeFrackingCore.h"

AFGResourceNodeFrackingSatellite::AFGResourceNodeFrackingSatellite() : Super() {
	this->mCore = nullptr;
	this->mState = EFrackingSatelliteState::FSS_Untouched;
	this->mDoSpawnParticle = false;
}
void AFGResourceNodeFrackingSatellite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGResourceNodeFrackingSatellite, mState);
}
void AFGResourceNodeFrackingSatellite::OnConstruction(const FTransform& Transform){ }
void AFGResourceNodeFrackingSatellite::BeginPlay(){ }
void AFGResourceNodeFrackingSatellite::SetIsOccupied(bool occupied){ }
bool AFGResourceNodeFrackingSatellite::CanPlaceResourceExtractor() const{ return bool(); }
void AFGResourceNodeFrackingSatellite::OnRep_IsOccupied(){ }
void AFGResourceNodeFrackingSatellite::Factory_SetActive(bool isActive){ }
void AFGResourceNodeFrackingSatellite::SetActive(bool isActive){ }
void AFGResourceNodeFrackingSatellite::SetExtractor(TWeakObjectPtr<  AFGBuildableFrackingExtractor > extractor){ }
void AFGResourceNodeFrackingSatellite::OnRep_State(){ }
void AFGResourceNodeFrackingSatellite::OnStateChanged_Native(EFrackingSatelliteState state, bool isFirstTimeActivated){ }
