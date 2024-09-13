// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableSignSupport.h"
#include "Components/SceneComponent.h"
#include "FGColoredInstanceMeshProxy.h"
#include "Hologram/FGSignPoleHologram.h"
#include "Net/UnrealNetwork.h"

AFGBuildableSignSupport::AFGBuildableSignSupport() : Super() {
	this->mPoleComponentProxy = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("PoleComponentProxy"));
	this->mHeight = 100.0;
	this->mPoleMesh = nullptr;
	this->mPoleScale = FVector2D::UnitVector;
	this->mHologramClass = AFGSignPoleHologram::StaticClass();
	this->mPoleComponentProxy->SetupAttachment(RootComponent);
}
void AFGBuildableSignSupport::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableSignSupport, mHeight);
	DOREPLIFETIME(AFGBuildableSignSupport, mPoleMesh);
}
void AFGBuildableSignSupport::BeginPlay(){ }
void AFGBuildableSignSupport::SetPoleScale(FVector2D poleScale){ }
void AFGBuildableSignSupport::OnBuildEffectActorFinished(){ }
TArray<struct FInstanceData> AFGBuildableSignSupport::GetActorLightweightInstanceData_Implementation(){ return TArray<struct FInstanceData>(); }
const FName AFGBuildableSignSupport::PoleMeshName = FName();
