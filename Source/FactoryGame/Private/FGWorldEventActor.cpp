// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWorldEventActor.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AFGWorldEventActor::AFGWorldEventActor() : Super() {
	this->mEventRadius = 50000.0;
	this->mCanBeAutomaticallyTriggered = true;
	this->mCanBeAutomaticallyReset = true;
	this->mDataLayer = nullptr;
	this->mState = EWorldEventState::Inactive;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
void AFGWorldEventActor::BeginPlay(){ }
void AFGWorldEventActor::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGWorldEventActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGWorldEventActor, mState);
}
void AFGWorldEventActor::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWorldEventActor::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWorldEventActor::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWorldEventActor::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWorldEventActor::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGWorldEventActor::NeedTransform_Implementation(){ return bool(); }
bool AFGWorldEventActor::ShouldSave_Implementation() const{ return bool(); }
bool AFGWorldEventActor::CanTrigger_Implementation() const{ return bool(); }
bool AFGWorldEventActor::TriggerWorldEvent(){ return bool(); }
void AFGWorldEventActor::ResetWorldEvent(){ }
void AFGWorldEventActor::FinishWorldEvent(){ }
void AFGWorldEventActor::OnWorldEventTriggered_Implementation(){ }
void AFGWorldEventActor::OnWorldEventReset_Implementation(){ }
void AFGWorldEventActor::OnWorldEventFinished_Implementation(){ }
void AFGWorldEventActor::SetDataLayerActive(bool Active){ }
bool AFGWorldEventActor::SetWorldEventState(EWorldEventState newState){ return bool(); }
void AFGWorldEventActor::OnRep_WorldEventState(){ }