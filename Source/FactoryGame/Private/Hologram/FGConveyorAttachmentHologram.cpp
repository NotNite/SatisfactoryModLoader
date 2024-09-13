// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGConveyorAttachmentHologram.h"
#include "Net/UnrealNetwork.h"

AFGConveyorAttachmentHologram::AFGConveyorAttachmentHologram() : Super() {
	this->mMaxValidTurnOffset = 240.0;
	this->mMaxValidTurnAngle = 3.0;
	this->mSnappedConveyor = nullptr;
	this->mUpgradedConveyorAttachment = nullptr;
	this->mSnappedConnection = nullptr;
	this->mSnappingConnectionIndex = -1;
	this->mSnappedConveyorOffset = 0.0;
	this->mUseBuildClearanceOverlapSnapp = false;
}
void AFGConveyorAttachmentHologram::BeginPlay(){ }
void AFGConveyorAttachmentHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGConveyorAttachmentHologram, mSnappedConveyor);
	DOREPLIFETIME(AFGConveyorAttachmentHologram, mUpgradedConveyorAttachment);
	DOREPLIFETIME(AFGConveyorAttachmentHologram, mSnappingConnectionIndex);
	DOREPLIFETIME(AFGConveyorAttachmentHologram, mSnappedConveyorOffset);
}
void AFGConveyorAttachmentHologram::PreHologramPlacement(const FHitResult& hitResult){ }
void AFGConveyorAttachmentHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGConveyorAttachmentHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
bool AFGConveyorAttachmentHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
AActor* AFGConveyorAttachmentHologram::GetUpgradedActor() const{ return nullptr; }
bool AFGConveyorAttachmentHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
float AFGConveyorAttachmentHologram::GetHologramHoverHeight() const{ return float(); }
void AFGConveyorAttachmentHologram::GetIgnoredClearanceActors(TArray< AActor* >& ignoredActors) const{ }
bool AFGConveyorAttachmentHologram::CanNudgeHologram() const{ return bool(); }
bool AFGConveyorAttachmentHologram::ShouldActorBeConsideredForGuidelines( AActor* actor) const{ return bool(); }
int32 AFGConveyorAttachmentHologram::GetRotationStep() const{ return int32(); }
void AFGConveyorAttachmentHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGConveyorAttachmentHologram::CheckValidPlacement(){ }
void AFGConveyorAttachmentHologram::SnapToConnection( UFGFactoryConnectionComponent* connectiontoSnapTo,  UFGFactoryConnectionComponent* myConnectionToSnapWith, FVector locationToDetermineSideIfAplicable){ }
FName AFGConveyorAttachmentHologram::mInputConnection1 = FName();
FName AFGConveyorAttachmentHologram::mOutputConnection1 = FName();
