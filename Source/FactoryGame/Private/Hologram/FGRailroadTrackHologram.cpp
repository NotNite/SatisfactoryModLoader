// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGRailroadTrackHologram.h"
#include "Net/UnrealNetwork.h"

AFGRailroadTrackHologram::AFGRailroadTrackHologram() : Super() {
	this->mDefaultSwitchControlRecipe = nullptr;
	this->mMinLength = 0.0;
	this->mMaxLength = 10000.0;
	this->mMinBendRadius = 3000.0;
	this->mMaxGrade = 25.0;
	this->mSnapDistance = 500.0;
	this->mConnectionComponents[0] = nullptr;
	this->mConnectionComponents[1] = nullptr;
	this->mSnappedConnectionComponents[0] = nullptr;
	this->mSnappedConnectionComponents[1] = nullptr;
	this->mMesh = nullptr;
	this->mSwitchControls[0] = nullptr;
	this->mSwitchControls[1] = nullptr;
}
void AFGRailroadTrackHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGRailroadTrackHologram, mSwitchControls);
}
void AFGRailroadTrackHologram::BeginPlay(){ }
USceneComponent* AFGRailroadTrackHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName, const FName& attachSocketName){ return nullptr; }
void AFGRailroadTrackHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
int32 AFGRailroadTrackHologram::GetBaseCostMultiplier() const{ return int32(); }
void AFGRailroadTrackHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
bool AFGRailroadTrackHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGRailroadTrackHologram::CheckBlueprintCommingling(){ }
void AFGRailroadTrackHologram::GetIgnoredClearanceActors(TArray< AActor* >& ignoredActors) const{ }
void AFGRailroadTrackHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGRailroadTrackHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGRailroadTrackHologram::SetLocationAndRotationFromPlatformConnections( UFGTrainPlatformConnection* connectionOne,  UFGTrainPlatformConnection* connectionTwo){ }
TArray< class UFGRailroadTrackConnectionComponent* > AFGRailroadTrackHologram::GetSnappedConnectionComponents(){ return TArray<class UFGRailroadTrackConnectionComponent*>(); }
void AFGRailroadTrackHologram::CheckValidPlacement(){ }
void AFGRailroadTrackHologram::CheckValidFloor(){ }
void AFGRailroadTrackHologram::UpdateClearanceData(){ }
void AFGRailroadTrackHologram::UpdateSplineComponent(){ }
void AFGRailroadTrackHologram::TryFindAndSnapToOverlappingConnection(int32 forConnectionIndex, FVector& inout_newLocation, FVector& inout_newTangent){ }
void AFGRailroadTrackHologram::TryPlaceSwitchControl(int32 forConnectionIndex){ }
bool AFGRailroadTrackHologram::ValidateGrade(){ return bool(); }
bool AFGRailroadTrackHologram::ValidateCurvature(){ return bool(); }
void AFGRailroadTrackHologram::AutoRouteSpline(const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
