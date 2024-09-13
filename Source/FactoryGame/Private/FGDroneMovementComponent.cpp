// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDroneMovementComponent.h"
#include "Net/UnrealNetwork.h"

UFGDroneMovementComponent::UFGDroneMovementComponent() : Super() {
	this->mDrone = nullptr;
	this->mFlyingMode = EDroneFlyingMode::DFM_None;
	this->mCurrentMovementInstruction = EDroneMovementInstruction::DMI_None;
	this->mBrakeWhenApproachingDestination = false;
	this->mFacingDirectionInstruction = EDroneDirectionFacingIstruction::DFI_None;
	this->mCurrentDestination = FVector::ZeroVector;
	this->mDirectionToFaceAtDestination = FVector::ZeroVector;
	this->mDesiredFacingDirection = FVector::ZeroVector;
	this->mServerVelocity = FVector::ZeroVector;
	this->mVelocity = FVector::ZeroVector;
	this->mIsBraking = false;
	this->bNetAddressable = true;
	this->SetIsReplicatedByDefault(true);
}
void UFGDroneMovementComponent::OnRegister(){ Super::OnRegister(); }
void UFGDroneMovementComponent::BeginPlay(){ }
void UFGDroneMovementComponent::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void UFGDroneMovementComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGDroneMovementComponent, mFlyingMode);
	DOREPLIFETIME(UFGDroneMovementComponent, mCurrentMovementInstruction);
	DOREPLIFETIME(UFGDroneMovementComponent, mCurrentPath);
	DOREPLIFETIME(UFGDroneMovementComponent, mBrakeWhenApproachingDestination);
	DOREPLIFETIME(UFGDroneMovementComponent, mFacingDirectionInstruction);
	DOREPLIFETIME(UFGDroneMovementComponent, mCurrentPathIndex);
	DOREPLIFETIME(UFGDroneMovementComponent, mCurrentDestination);
	DOREPLIFETIME(UFGDroneMovementComponent, mDirectionToFaceAtDestination);
	DOREPLIFETIME(UFGDroneMovementComponent, mDesiredFacingDirection);
	DOREPLIFETIME(UFGDroneMovementComponent, mServerVelocity);
}
void UFGDroneMovementComponent::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGDroneMovementComponent::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGDroneMovementComponent::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGDroneMovementComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGDroneMovementComponent::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGDroneMovementComponent::NeedTransform_Implementation(){ return bool(); }
bool UFGDroneMovementComponent::ShouldSave_Implementation() const{ return bool(); }
void UFGDroneMovementComponent::PostDroneReceiveLocationAndRotation(const FVector& newLocation, const FRotator& newRotation){ }
void UFGDroneMovementComponent::TickDroneMovement(float deltaSeconds, FVector& out_newLocation, FRotator& out_newRotation){ }
float UFGDroneMovementComponent::GetMaxSpeed() const{ return float(); }
void UFGDroneMovementComponent::MoveToLocation(const FVector& Location, EDroneFlyingMode flyingMode, const FVector& directionToFace , EDroneDirectionFacingIstruction facingDirectionInstruction){ }
void UFGDroneMovementComponent::FollowPath(const TArray< FVector >& Path, EDroneFlyingMode flyingMode, bool brakeWhenApproaching){ }
void UFGDroneMovementComponent::OnRep_MovementInstruction(EDroneMovementInstruction previousInstruction){ }
void UFGDroneMovementComponent::OnRep_FlyingMode(){ }
void UFGDroneMovementComponent::SetFlyingMode(EDroneFlyingMode newFlyingMode){ }
void UFGDroneMovementComponent::SetMovementInstruction(EDroneMovementInstruction movementInstruction){ }
void UFGDroneMovementComponent::CancelCurrentMovement(){ }
void UFGDroneMovementComponent::TickMovement_MoveTo(float deltaSeconds, FVector& out_newLocation, FRotator& out_newRotation){ }
void UFGDroneMovementComponent::TickMovement_FollowPath(float deltaSeconds, FVector& out_newLocation, FRotator& out_newRotation){ }
void UFGDroneMovementComponent::TickMovement_None(float deltaSeconds, FVector& out_newLocation, FRotator& out_newRotation){ }
bool UFGDroneMovementComponent::MoveTowardsLocation(const FVector& location, float deltaSeconds, FVector& out_newLocation, FRotator& out_newRotation, bool brakeWhenApproaching){ return bool(); }
bool UFGDroneMovementComponent::HasAuthority() const{ return bool(); }
void UFGDroneMovementComponent::SetRegistered(bool registered, bool updateTransformWhenUnregistered){ }
