// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableConveyorBelt.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "FGConveyorInstanceSplineMesh.h"
#include "Hologram/FGConveyorBeltHologram.h"
#include "Net/UnrealNetwork.h"

AFGBuildableConveyorBelt::AFGBuildableConveyorBelt() : Super() {
	this->mMesh = nullptr;
	this->mCollisionProxyMesh = nullptr;
	this->mMeshLength = 0.0;
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	this->mSoundSplineComponent = nullptr;
	this->mSplineAudioEvent = nullptr;
	this->mVisibilityMeshComponent = CreateDefaultSubobject<UFGConveyorBeltVisibilityMesh>(TEXT("VisibilityMesh"));
	this->PhysicalMaterial = nullptr;
	this->mHologramClass = AFGConveyorBeltHologram::StaticClass();
	this->mSplineComponent->SetupAttachment(RootComponent);
	this->mVisibilityMeshComponent->SetupAttachment(RootComponent);
}
void AFGBuildableConveyorBelt::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableConveyorBelt, mSplineData);
}
void AFGBuildableConveyorBelt::BeginPlay(){ }
void AFGBuildableConveyorBelt::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableConveyorBelt::GainedSignificance_Implementation(){ }
void AFGBuildableConveyorBelt::LostSignificance_Implementation(){ }
float AFGBuildableConveyorBelt::GetSignificanceRange(){ return float(); }
void AFGBuildableConveyorBelt::SetupForSignificance(){ }
void AFGBuildableConveyorBelt::UpdateMeshLodLevels(int32 newLodLevel){ }
TArray<FInstanceData> AFGBuildableConveyorBelt::GetActorLightweightInstanceData_Implementation(){ return TArray<FInstanceData>(); }
int32 AFGBuildableConveyorBelt::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildableConveyorBelt::OnBuildEffectFinished(){ }
float AFGBuildableConveyorBelt::FindOffsetClosestToLocation(const FVector& location) const{ return float(); }
void AFGBuildableConveyorBelt::GetLocationAndDirectionAtOffset(float offset, FVector& out_location, FVector& out_direction) const{ }
FVector AFGBuildableConveyorBelt::GetVelocityForBase( AActor* basedActor,  UPrimitiveComponent* baseComponent) const{ return FVector(); }
FVector AFGBuildableConveyorBelt::GetRefundSpawnLocationAndArea_Implementation(const FVector& aimHitLocation, float& out_radius) const{ return FVector(); }
void AFGBuildableConveyorBelt::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildableConveyorBelt::CreateClearanceData( USplineComponent* splineComponent, const TArray< FSplinePointData >& splineData, const FTransform& conveyorTransform, TArray< FFGClearanceData >& out_clearanceData, float maxDistance){ }
float AFGBuildableConveyorBelt::GetLastRenderTime() const{ return float(); }
void AFGBuildableConveyorBelt::UpdateVisibilityMesh(){ }
TArray< AFGBuildableConveyorBelt* > AFGBuildableConveyorBelt::Split(AFGBuildableConveyorBelt* conveyor, float offset, bool connectNewConveyors){ return TArray<AFGBuildableConveyorBelt*>(); }
AFGBuildableConveyorBelt* AFGBuildableConveyorBelt::Merge(TArray< AFGBuildableConveyorBelt* > conveyors){ return nullptr; }
AFGBuildableConveyorBelt* AFGBuildableConveyorBelt::Respline(AFGBuildableConveyorBelt* conveyor, const TArray< FSplinePointData >& newSplineData){ return nullptr; }
UFGConnectionComponent* AFGBuildableConveyorBelt::GetSplineConnection0() const{ return nullptr; }
UFGConnectionComponent* AFGBuildableConveyorBelt::GetSplineConnection1() const{ return nullptr; }
void AFGBuildableConveyorBelt::DestroyVisualItems(){ }
void AFGBuildableConveyorBelt::PostSerializedFromBlueprint(bool isBlueprintWorld){ }
void AFGBuildableConveyorBelt::ClearLUT(){ }
bool AFGBuildableConveyorBelt::VerifyDefaults(FString& out_message){ return bool(); }
void AFGBuildableConveyorBelt::TickItemTransforms(float dt){ }
void AFGBuildableConveyorBelt::TickRadioactivity(){ }
void AFGBuildableConveyorBelt::Factory_UpdateRadioactivity( AFGRadioactivitySubsystem* subsystem){ }
void AFGBuildableConveyorBelt::GenerateCachedClearanceData(TArray< FFGClearanceData >& out_clearanceData){ }
void AFGBuildableConveyorBelt::SetupConnections(){ }
void AFGBuildableConveyorBelt::TickSingleItemTransform(const FConveyorBeltItem& item, TMap< FName, int32 >& instanceCounts,  AFGRadioactivitySubsystem* radioactiveSubsystem){ }
void AFGBuildableConveyorBelt::PopulateSplineComponentFromSplinePointsData(){ }
