// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCircuit.h"
#include "Net/UnrealNetwork.h"

void UFGCircuit::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGCircuit, mCircuitID);
	DOREPLIFETIME(UFGCircuit, mPropertyReplicator);
}
bool UFGCircuit::IsSupportedForNetworking() const{ return bool(); }
bool UFGCircuit::IsNameStableForNetworking() const{ return bool(); }
UFGCircuit::UFGCircuit() : Super() {
	this->mCircuitID = -1;
	this->mNeedFullRebuild = true;
	this->mHasChanged = false;
}
void UFGCircuit::BeginDestroy(){ Super::BeginDestroy(); }
void UFGCircuit::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGCircuit::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGCircuit::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGCircuit::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGCircuit::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGCircuit::NeedTransform_Implementation(){ return bool(); }
bool UFGCircuit::ShouldSave_Implementation() const{ return bool(); }
bool UFGCircuit::IsPropertyRelevantForConnection(UNetConnection* netConnection, const FProperty* property) const{ return bool(); }
void UFGCircuit::GetConditionalReplicatedProps(TArray<FFGCondReplicatedProperty>& outProps) const{ }
UWorld* UFGCircuit::GetWorld() const{ return nullptr; }
void UFGCircuit::MarkAsChanged(){ }
void UFGCircuit::MarkForFullRebuild(){ }
void UFGCircuit::RegisterInteractingPlayer( AFGCharacterPlayer* player){ }
void UFGCircuit::UnregisterInteractingPlayer( AFGCharacterPlayer* player){ }
void UFGCircuit::Debug_LogState() const{ }
bool UFGCircuit::IsTrivial() const{ return bool(); }
bool UFGCircuit::HasAuthority() const{ return bool(); }
AFGCircuitSubsystem* UFGCircuit::GetOwningCircuitSubsystem() const{ return nullptr; }
void UFGCircuit::TickCircuit(float dt){ }
void UFGCircuit::OnCircuitChanged(){ }
void UFGCircuit::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos, float indent){ }
