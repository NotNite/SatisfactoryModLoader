// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableConveyorLift.h"
#include "Components/SceneComponent.h"
#include "FGConveyorInstanceSplineMesh.h"
#include "Net/UnrealNetwork.h"

#if WITH_EDITORONLY_DATA
#endif 
#if WITH_EDITOR
void AFGBuildableConveyorLift::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent){ }
#endif 
AFGBuildableConveyorLift::AFGBuildableConveyorLift() : Super() {
	this->mConveyorLiftSparesDataCDO = nullptr;
	this->mMeshHeight = 200.0;
	this->mBottomMesh = nullptr;
	this->mMidMesh = nullptr;
	this->mHalfMidMesh = nullptr;
	this->mTopMesh = nullptr;
	this->mBellowMesh = nullptr;
	this->mJointMesh = nullptr;
	this->mShelfMesh = nullptr;
	this->mTopTransform = FTransform(FQuat::Identity, FVector::ZeroVector, FVector::OneVector);
	this->mIsReversed = false;
	this->mFlipMeshOnReverse = false;
	this->mOpposingConnectionClearance[0] = 0.0;
	this->mOpposingConnectionClearance[1] = 0.0;
	this->mVisibilityComponent = CreateDefaultSubobject<UFGConveyorLiftVisibilityMesh>(TEXT("VisibilityMesh"));
	this->mVisibilityComponent->SetupAttachment(RootComponent);
}
void AFGBuildableConveyorLift::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableConveyorLift, mTopTransform);
	DOREPLIFETIME(AFGBuildableConveyorLift, mIsReversed);
	DOREPLIFETIME(AFGBuildableConveyorLift, mSnappedPassthroughs);
	DOREPLIFETIME(AFGBuildableConveyorLift, mOpposingConnectionClearance);
}
void AFGBuildableConveyorLift::BeginPlay(){ }
int32 AFGBuildableConveyorLift::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
bool AFGBuildableConveyorLift::ShouldShowCenterGuidelinesForHologram(const AFGHologram* hologram) const{ return bool(); }
void AFGBuildableConveyorLift::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildableConveyorLift::Dismantle_Implementation(){ }
TArray<struct FInstanceData> AFGBuildableConveyorLift::GetActorLightweightInstanceData_Implementation(){ return TArray<struct FInstanceData>(); }
float AFGBuildableConveyorLift::GetDistanceBetweenFirstConnection(){ return float(); }
float AFGBuildableConveyorLift::GetDistanceBetweenLastConnection(){ return float(); }
void AFGBuildableConveyorLift::BuildStaticItemInstances(){ }
float AFGBuildableConveyorLift::GetLastRenderTime() const{ return float(); }
void AFGBuildableConveyorLift::SetupConnections(){ }
void AFGBuildableConveyorLift::DestroyVisualItems(){ }
void AFGBuildableConveyorLift::TickItemTransforms(float dt){ }
void AFGBuildableConveyorLift::TickRadioactivity(){ }
void AFGBuildableConveyorLift::Factory_UpdateRadioactivity( AFGRadioactivitySubsystem* subsystem){ }
FBox AFGBuildableConveyorLift::FitClearance(float transformZ,
		float stepHeight,
		const FVector2D& extend2D,
		const FVector& extentBias ,
		bool hasBottomHole ,
		bool hasTopHole ,
		bool isReversed){ return FBox(); }
void AFGBuildableConveyorLift::OnRep_TopTransform(){ }
void AFGBuildableConveyorLift::OnRep_SnappedPassthroughs(){ }
const FVector2D AFGBuildableConveyorLift::CLEARANCE_EXTENT_2D = FVector2D();
