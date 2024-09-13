// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDroneVehicle.h"
#include "FGDroneMovementComponent.h"
#include "FGInventoryComponent.h"
#include "Net/UnrealNetwork.h"

TAutoConsoleVariable<int32> CVarDronesDebug(TEXT("CVarDronesDebug"), 0, TEXT(""));
#if !UE_BUILD_SHIPPING
void AFGDroneVehicle::ShowDebug(){ }
#endif 
AFGDroneVehicle::AFGDroneVehicle() : Super() {
	this->mCompassMaterialInstance = nullptr;
	this->mMovementComponent = CreateDefaultSubobject<UFGDroneMovementComponent>(TEXT("DroneMovement"));
	this->mDefaultFuelType.Item = nullptr;
	this->mDefaultFuelType.ThrusterColor = FColor(0, 128, 255);
	this->mDefaultFuelType.ThrusterEndColor = FColor(255, 200, 64);
	this->mDefaultFuelType.FlightSpeed = 1000.0;
	this->mDefaultFuelType.TravelSpeed = 7000.0;
	this->mStorageInventory = CreateDefaultSubobject<UFGInventoryComponent>(TEXT("StorageInventory"));
	this->mInventorySize = 20;
	this->mDockingSequenceDuration = 0.0;
	this->mTakeoffSequenceDuration = 0.0;
	this->mTravelStartSequenceDuration = 0.0;
	this->mActiveFuelName = TEXT("None");
	this->mCurrentTripPowerCost = 0.0;
	this->mCurrentTripInformation.TripDuration = 0.0;
	this->mCurrentTripInformation.IncomingItemStacks = 0.0;
	this->mCurrentTripInformation.OutgoingItemStacks = 0.0;
	this->mHasBegunTrip = false;
	this->mCurrentDockingState.State = EDroneDockingState::DS_UNDOCKED;
	this->mCurrentDockingState.StateStartTime = 0.0;
	this->mDockedStation = nullptr;
	this->mHomeStation = nullptr;
	this->mCurrentDestinationStation = nullptr;
	this->mCurrentAction = nullptr;
}
void AFGDroneVehicle::Serialize(FArchive& Ar){ Super::Serialize(Ar); }
void AFGDroneVehicle::BeginPlay(){ }
void AFGDroneVehicle::Tick(float DeltaTime){ }
void AFGDroneVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGDroneVehicle, mMovementComponent);
	DOREPLIFETIME(AFGDroneVehicle, mActiveFuelName);
	DOREPLIFETIME(AFGDroneVehicle, mCurrentDockingState);
	DOREPLIFETIME(AFGDroneVehicle, mDockedStation);
}
void AFGDroneVehicle::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGDroneVehicle::PostNetReceiveLocationAndRotation(){ }
bool AFGDroneVehicle::IsUseable_Implementation() const{ return bool(); }
void AFGDroneVehicle::Dismantle_Implementation(){ }
void AFGDroneVehicle::OnIsSimulatedChanged(){ }
void AFGDroneVehicle::GainedSignificance_Implementation(){ }
void AFGDroneVehicle::LostSignificance_Implementation(){ }
void AFGDroneVehicle::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGDroneVehicle::AddAsRepresentation(){ return bool(); }
bool AFGDroneVehicle::UpdateRepresentation(){ return bool(); }
bool AFGDroneVehicle::RemoveAsRepresentation(){ return bool(); }
bool AFGDroneVehicle::IsActorStatic(){ return bool(); }
FVector AFGDroneVehicle::GetRealActorLocation(){ return FVector(); }
FRotator AFGDroneVehicle::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGDroneVehicle::GetActorRepresentationTexture(){ return nullptr; }
FText AFGDroneVehicle::GetActorRepresentationText(){ return FText(); }
void AFGDroneVehicle::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGDroneVehicle::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGDroneVehicle::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGDroneVehicle::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGDroneVehicle::GetActorShouldShowInCompass(){ return bool(); }
bool AFGDroneVehicle::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGDroneVehicle::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGDroneVehicle::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGDroneVehicle::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGDroneVehicle::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
UMaterialInterface* AFGDroneVehicle::GetActorRepresentationCompassMaterial(){ return nullptr; }
void AFGDroneVehicle::NotifyPairedStationUpdated( AFGBuildableDroneStation* NewPairedStation){ }
void AFGDroneVehicle::OnUndocked(){ }
void AFGDroneVehicle::OnDockedStationDestroyed(){ }
void AFGDroneVehicle::OnBeginLoadVehicle_Implementation(){ }
void AFGDroneVehicle::OnBeginUnloadVehicle_Implementation(){ }
void AFGDroneVehicle::OnTransferComplete_Implementation(){ }
TArray<FVector> AFGDroneVehicle::GeneratePathToDestination(const FVector& CurrentLocation, const FVector& Destination, UWorld* World){ return TArray<FVector>(); }
void AFGDroneVehicle::BeginDocking( AFGBuildableDroneStation* station){ }
void AFGDroneVehicle::UpdateDockingQueuePosition(int NewPosition){ }

FFGDroneFuelType const& AFGDroneVehicle::GetActiveFuelType() const {
	return mDefaultFuelType;
}

float AFGDroneVehicle::GetSpeedFlying() const{ return float(); }
float AFGDroneVehicle::GetSpeedTraveling() const{ return float(); }
float AFGDroneVehicle::GetTimeSinceDockingStateChanged() const{ return float(); }
bool AFGDroneVehicle::IsValidFuelItem(TSubclassOf<  UFGItemDescriptor > item) const{ return bool(); }
void AFGDroneVehicle::SetHomeStation( AFGBuildableDroneStation* station){ }
bool AFGDroneVehicle::PrepareTripFromDockedStation(const  AFGBuildableDroneStation* ToStation){ return bool(); }
void AFGDroneVehicle::RefuelFromDockedStation(float amount){ }
bool AFGDroneVehicle::TravelToStation( AFGBuildableDroneStation* station, bool ShouldTransferItems){ return bool(); }
bool AFGDroneVehicle::TravelToLocation(const FVector& Location){ return bool(); }
void AFGDroneVehicle::BeginNewTrip( AFGBuildableDroneStation* Station){ }
void AFGDroneVehicle::EndCurrentTrip(bool Completed){ }
void AFGDroneVehicle::StartDockingSequence_Implementation( AFGBuildableDroneStation* Station){ }
void AFGDroneVehicle::EndDockingSequence_Implementation( AFGBuildableDroneStation* Station, bool ShouldTransferItems){ }
void AFGDroneVehicle::StartTakeoffSequence_Implementation( AFGBuildableDroneStation* Station){ }
void AFGDroneVehicle::EndTakeoffSequence_Implementation( AFGBuildableDroneStation* Station){ }
void AFGDroneVehicle::StartTravelStartSequence_Implementation(){ }
void AFGDroneVehicle::EndTravelStartSequence_Implementation(){ }
void AFGDroneVehicle::OnActiveFuelTypeChanged_Implementation(const FFGDroneFuelType& FuelType){ }
void AFGDroneVehicle::OnRep_DockingState(){ }
void AFGDroneVehicle::OnRep_DockedStation(){ }
void AFGDroneVehicle::OnRep_ActiveFuel(){ }
void AFGDroneVehicle::OnSignificanceUpdate(){ }
const FFGDroneFuelType* AFGDroneVehicle::GetFuelTypeFromName(FName fuelName) const{ return nullptr; }
const FFGDroneFuelRuntimeData* AFGDroneVehicle::GetFuelDataFromName(FName fuelName) const{ return nullptr; }
FFGDroneFuelRuntimeData* AFGDroneVehicle::GetFuelDataFromName(FName fuelName){ return nullptr; }
void AFGDroneVehicle::ClearAllActions(bool KeepCurrentAction){ }
void AFGDroneVehicle::SetDockingState(EDroneDockingState State){ }
bool AFGDroneVehicle::SelectAndConsumeAnyFuel(float fuelAmount){ return bool(); }
bool AFGDroneVehicle::SelectAndConsumeFastestFuel(float fuelAmount){ return bool(); }
void AFGDroneVehicle::SwitchToFuelType(const FFGDroneFuelType& fuelType){ }
void AFGDroneVehicle::SetupFuelData(){ }
FDroneAction* AFGDroneVehicle::MigrateLegacyAction( UFGDroneAction* action){ return nullptr; }
void AFGDroneVehicle::OnMovementFlyingModeChanged(EDroneFlyingMode NewFlyingMode){ }
void AFGDroneVehicle::OnMovementBrakingStateChanged(bool IsBraking){ }
FGDroneActionFactory::FGDroneActionFactory(AFGDroneVehicle* drone){ }
#if !UE_BUILD_SHIPPING
void FDroneAction::ShowDebug(FString& out_concatDebugString){ }
#endif 
FDroneAction::FDroneAction(){ }
FDroneAction::FDroneAction(AFGDroneVehicle* drone){ }
void FDroneAction::Begin(){ }
UScriptStruct* FDroneAction::GetActionStaticStruct() const{ return nullptr; }
void FDroneAction::PushAction(FDroneAction* action){ }
#if !UE_BUILD_SHIPPING
void FDroneAction_Timed::ShowDebug(FString& out_concatDebugString){ }
#endif 
FDroneAction_Timed::FDroneAction_Timed(){ }
FDroneAction_Timed::FDroneAction_Timed(AFGDroneVehicle* drone){ }
void FDroneAction_Timed::Tick(float dt){ }
bool FDroneAction_Timed::IsDone() const{ return bool(); }
FDroneAction_TraversePath::FDroneAction_TraversePath(){ }
FDroneAction_TraversePath::FDroneAction_TraversePath(AFGDroneVehicle* drone, const TArray< FVector >& path, EDroneFlyingMode flyingMode, bool stopAtDestination){ }
FDroneAction_TraversePath::FDroneAction_TraversePath(AFGDroneVehicle* drone, const UFGDroneAction_TraversePath* legacyAction){ }
void FDroneAction_TraversePath::Begin(){ }
void FDroneAction_TraversePath::End(){ }
void FDroneAction_TraversePath::ReceiveActionEvent(EDroneActionEvent ActionEvent, void* EventData){ }
bool FDroneAction_TraversePath::IsDone() const{ return bool(); }
void FDroneAction_TraversePath::OnDestinationReached(){ }
FDroneAction_MoveToLocation::FDroneAction_MoveToLocation(){ }
FDroneAction_MoveToLocation::FDroneAction_MoveToLocation(AFGDroneVehicle* drone, const FVector& location, EDroneFlyingMode flyingMode, const FVector& directionToFace , EDroneDirectionFacingIstruction directionFacingInstruction){ }
void FDroneAction_MoveToLocation::Begin(){ }
void FDroneAction_MoveToLocation::End(){ }
void FDroneAction_MoveToLocation::ReceiveActionEvent(EDroneActionEvent ActionEvent, void* EventData){ }
bool FDroneAction_MoveToLocation::IsDone() const{ return bool(); }
void FDroneAction_MoveToLocation::OnDestinationReached(){ }
#if !UE_BUILD_SHIPPING
void FDroneAction_RequestDocking::ShowDebug(FString& out_concatDebugString){ }
#endif 
FDroneAction_RequestDocking::FDroneAction_RequestDocking(){ }
FDroneAction_RequestDocking::FDroneAction_RequestDocking(AFGDroneVehicle* drone,  AFGBuildableDroneStation* station, bool shouldTransferItems){ }
FDroneAction_RequestDocking::FDroneAction_RequestDocking(AFGDroneVehicle* drone, const UFGDroneAction_RequestDocking* legacyAction){ }
void FDroneAction_RequestDocking::Begin(){ }
void FDroneAction_RequestDocking::End(){ }
void FDroneAction_RequestDocking::MoveToDesignatedQueuePosition(EDroneFlyingMode FlyingMode){ }
void FDroneAction_RequestDocking::Tick(float dt){ }
void FDroneAction_RequestDocking::ReceiveActionEvent(EDroneActionEvent ActionEvent, void* EventData){ }
bool FDroneAction_RequestDocking::IsDone() const{ return bool(); }
void FDroneAction_RequestDocking::OnDestinationReached(){ }
void FDroneAction_RequestDocking::MoveToStationAirLocation(EDroneFlyingMode flyingMode){ }
FDroneAction_DockingSequence::FDroneAction_DockingSequence(){ }
FDroneAction_DockingSequence::FDroneAction_DockingSequence(AFGDroneVehicle* drone,  AFGBuildableDroneStation* station, bool shouldTransferItems){ }
FDroneAction_DockingSequence::FDroneAction_DockingSequence(AFGDroneVehicle* drone, const UFGDroneAction_DockingSequence* legacyAction){ }
void FDroneAction_DockingSequence::Begin(){ }
void FDroneAction_DockingSequence::End(){ }
float FDroneAction_DockingSequence::GetActionDuration() const{ return float(); }
FDroneAction_TakeoffSequence::FDroneAction_TakeoffSequence(){ }
FDroneAction_TakeoffSequence::FDroneAction_TakeoffSequence(AFGDroneVehicle* drone,  AFGBuildableDroneStation* station){ }
FDroneAction_TakeoffSequence::FDroneAction_TakeoffSequence(AFGDroneVehicle* drone, const UFGDroneAction_TakeoffSequence* legacyAction){ }
void FDroneAction_TakeoffSequence::Begin(){ }
void FDroneAction_TakeoffSequence::End(){ }
float FDroneAction_TakeoffSequence::GetActionDuration() const{ return float(); }
void FDroneAction_TakeoffSequence::ReceiveActionEvent(EDroneActionEvent ActionEvent, void* EventData){ }
FDroneAction_TravelStartSequence::FDroneAction_TravelStartSequence(){ }
FDroneAction_TravelStartSequence::FDroneAction_TravelStartSequence(AFGDroneVehicle* drone, const FVector& destination){ }
FDroneAction_TravelStartSequence::FDroneAction_TravelStartSequence(AFGDroneVehicle* drone, const UFGDroneAction_TravelStartSequence* legacyAction){ }
void FDroneAction_TravelStartSequence::Begin(){ }
void FDroneAction_TravelStartSequence::End(){ }
float FDroneAction_TravelStartSequence::GetActionDuration() const{ return float(); }
