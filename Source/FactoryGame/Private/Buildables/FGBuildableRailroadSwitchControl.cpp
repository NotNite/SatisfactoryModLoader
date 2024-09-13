// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableRailroadSwitchControl.h"
#include "Components/SceneComponent.h"
#include "FGColoredInstanceMeshProxy.h"
#include "Net/UnrealNetwork.h"

AFGBuildableRailroadSwitchControl::AFGBuildableRailroadSwitchControl() : Super() {
	this->mSwitchComponent = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("Switch Component"));
	this->mControlledConnection = nullptr;
	this->mSignificanceRange = 75000.0;
	this->NetDormancy = ENetDormancy::DORM_Awake;
	this->mSwitchComponent->SetupAttachment(RootComponent);
}
void AFGBuildableRailroadSwitchControl::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableRailroadSwitchControl, mControlledConnection);
	DOREPLIFETIME(AFGBuildableRailroadSwitchControl, mSwitchData);
	DOREPLIFETIME(AFGBuildableRailroadSwitchControl, mVisualState);
}
void AFGBuildableRailroadSwitchControl::BeginPlay(){ }
void AFGBuildableRailroadSwitchControl::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGBuildableRailroadSwitchControl::OnBuildEffectFinished(){ }
void AFGBuildableRailroadSwitchControl::OnBuildEffectActorFinished(){ }
void AFGBuildableRailroadSwitchControl::GainedSignificance_Implementation(){ }
void AFGBuildableRailroadSwitchControl::LostSignificance_Implementation(){ }
void AFGBuildableRailroadSwitchControl::GainedSignificance_Native(){ }
void AFGBuildableRailroadSwitchControl::LostSignificance_Native(){ }
void AFGBuildableRailroadSwitchControl::SetupForSignificance(){ }
bool AFGBuildableRailroadSwitchControl::ShouldBlockDismantleSample_Implementation() const{ return bool(); }
bool AFGBuildableRailroadSwitchControl::CanDismantle_Implementation() const{ return bool(); }
void AFGBuildableRailroadSwitchControl::Dismantle_Implementation(){ }
void AFGBuildableRailroadSwitchControl::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState){ }
void AFGBuildableRailroadSwitchControl::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableRailroadSwitchControl::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGBuildableRailroadSwitchControl::IsUseable_Implementation() const{ return bool(); }
void AFGBuildableRailroadSwitchControl::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGBuildableRailroadSwitchControl::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGBuildableRailroadSwitchControl::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableRailroadSwitchControl::ToggleSwitchPosition(){ }
void AFGBuildableRailroadSwitchControl::OnSwitchPositionChanged(int32 newPosition, int32 numPositions){ }
void AFGBuildableRailroadSwitchControl::SetControlledConnection( UFGRailroadTrackConnectionComponent* controlledConnection){ }
void AFGBuildableRailroadSwitchControl::OnRep_ControlledConnection(){ }
void AFGBuildableRailroadSwitchControl::OnRep_VisualState(){ }
void AFGBuildableRailroadSwitchControl::UpdateVisuals(){ }
void AFGBuildableRailroadSwitchControl::ApplyVisualState(int16 state){ }
