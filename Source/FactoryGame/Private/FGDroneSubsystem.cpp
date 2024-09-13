// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDroneSubsystem.h"
#include "Net/UnrealNetwork.h"

AFGDroneSubsystem::AFGDroneSubsystem() : Super() {
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
AFGDroneSubsystem* AFGDroneSubsystem::Get(UWorld* world){ return nullptr; }
AFGDroneSubsystem* AFGDroneSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGDroneSubsystem::BeginPlay(){ }
void AFGDroneSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGDroneSubsystem, mStations);
	DOREPLIFETIME(AFGDroneSubsystem, mDrones);
}
void AFGDroneSubsystem::Tick(float DeltaSeconds){ }
void AFGDroneSubsystem::AddStation( AFGBuildableDroneStation* station){ }
void AFGDroneSubsystem::RemoveStation( AFGBuildableDroneStation* station){ }
void AFGDroneSubsystem::RegisterDrone( AFGDroneVehicle* drone){ }
void AFGDroneSubsystem::UnregisterDrone( AFGDroneVehicle* drone){ }
void AFGDroneSubsystem::RegisterDroneMovement( UFGDroneMovementComponent* droneMovement){ }
void AFGDroneSubsystem::UnregisterDroneMovement( UFGDroneMovementComponent* droneMovement){ }
void AFGDroneSubsystem::SearchStations(AFGDroneStationInfo* originStation, AFGDroneStationInfo* hostStation, FString filter, bool connectionsOnly, bool excludeOrigin, bool pairedFirst, bool includeEmptyStation, TArray< FDroneStationData >& result){ }
void AFGDroneSubsystem::Server_PairStations(AFGDroneStationInfo* origin, AFGDroneStationInfo* target){ }
void AFGDroneSubsystem::SetInitialStationName(AFGDroneStationInfo* stationInfo){ }
void AFGDroneSubsystem::SetStationName(AFGDroneStationInfo* stationInfo, const FString& newName){ }
FText AFGDroneSubsystem::GenerateStationName() const{ return FText(); }
bool AFGDroneSubsystem::IsStationNameAvailable(const FString& name) const{ return bool(); }
void AFGDroneSubsystem::InitializeStationNames(){ }
void AFGDroneSubsystem::UpdatePhysics(FPhysScene* physScene, float dt){ }
void AFGDroneSubsystem::TickDroneMovement(float DeltaSeconds){ }
