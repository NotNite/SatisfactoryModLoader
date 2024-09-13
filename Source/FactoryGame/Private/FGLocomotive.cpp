// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGLocomotive.h"
#include "FGLocomotiveMovementComponent.h"
#include "FGPowerConnectionComponent.h"
#include "FGPowerInfoComponent.h"
#include "Net/UnrealNetwork.h"

void AFGLocomotive::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGLocomotive, mHasPower);
	DOREPLIFETIME(AFGLocomotive, mHeadlightMode);
}
AFGLocomotive::AFGLocomotive() : Super() {
	this->mPowerConsumption = FFloatInterval(0.0, 15.0);
	this->mSlidingShoe = CreateDefaultSubobject<UFGPowerConnectionComponent>(TEXT("SlidingShoe"));
	this->mPowerInfo = CreateDefaultSubobject<UFGPowerInfoComponent>(TEXT("powerInfo"));
	this->mHasPower = false;
	this->mVehicleMovement = CreateDefaultSubobject<UFGLocomotiveMovementComponent>(TEXT("MovementComp"));
	this->mHeadlightMode = ELocomotiveHeadlightsMode::LHM_Off;
	this->mHeadlightModes[0].ShowBeam = false;;
	this->mHeadlightModes[0].Color = FLinearColor(0.0, 0.0, 0.0, 0.0);;
	this->mHeadlightModes[0].Intensity = 0.0;;
	this->mHeadlightModes[1].ShowBeam = false;;
	this->mHeadlightModes[1].Color = FLinearColor(0.0, 0.0, 0.0, 0.0);;
	this->mHeadlightModes[1].Intensity = 0.0;;
	this->mHeadlightModes[2].ShowBeam = false;;
	this->mHeadlightModes[2].Color = FLinearColor(0.0, 0.0, 0.0, 0.0);;
	this->mHeadlightModes[2].Intensity = 0.0;;
	this->mLocomotiveMenuWidgetClass = nullptr;
}
void AFGLocomotive::BeginPlay(){ }
void AFGLocomotive::Tick(float dt){ }
void AFGLocomotive::PossessedBy(AController* newController){ }
void AFGLocomotive::UnPossessed(){ }
bool AFGLocomotive::DriverEnter( AFGCharacterPlayer* driver){ return bool(); }
bool AFGLocomotive::DriverLeave(bool keepDriving){ return bool(); }
void AFGLocomotive::AddInputBindings(UInputComponent* inputComponent){ }
bool AFGLocomotive::CanLeaveVehicle(AFGCharacterPlayer* character){ return bool(); }
void AFGLocomotive::UpdatePlayerStatus(){ }
void AFGLocomotive::UpdatePower(){ }
void AFGLocomotive::GainedSignificance_Implementation(){ }
EMultipleUnitControl AFGLocomotive::GetMultipleUnitRole() const{ return EMultipleUnitControl(); }
bool AFGLocomotive::CanSetTrainMultipleUnitMaster() const{ return bool(); }
bool AFGLocomotive::SetMultipleUnitControlMaster(bool force){ return bool(); }
void AFGLocomotive::ClearMultipleUnitControlMaster(){ }
void AFGLocomotive::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGLocomotive::GiveHumanDriverControl(){ }
void AFGLocomotive::UpdateHeadlightsMode(){ }
void AFGLocomotive::OpenLocomotiveMenu(){ }
bool AFGLocomotive::IsInputEnabled() const{ return bool(); }
void AFGLocomotive::Input_ThrottleAxis_Started(const FInputActionValue& actionValue){ }
void AFGLocomotive::Input_ThrottleAxis(const FInputActionValue& actionValue){ }
void AFGLocomotive::Input_SteerAxis(const FInputActionValue& actionValue){ }
void AFGLocomotive::Input_Handbrake(const FInputActionValue& actionValue){ }
void AFGLocomotive::Input_Honk(const FInputActionValue& actionValue){ }
void AFGLocomotive::Input_OpenLocomotiveMenu(const FInputActionValue& actionValue){ }
void AFGLocomotive::SetPowerConsumption(float pct){ }
void AFGLocomotive::SetPowerRegeneration(float pct){ }
void AFGLocomotive::OnHasPowerChanged(){ }
void AFGLocomotive::OnRep_HeadlightMode(){ }
FName AFGLocomotive::VehicleMovementComponentName = FName();
AFGLocomotive::FOnLocomotivePossessedBy AFGLocomotive::OnPossessedBy = FOnLocomotivePossessedBy();
AFGLocomotive::FOnLocomotiveUnPossessed AFGLocomotive::OnUnPossessed = FOnLocomotiveUnPossessed();
