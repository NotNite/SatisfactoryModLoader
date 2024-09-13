// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGActorRepresentationManager.h"
#include "Net/UnrealNetwork.h"

bool FFGActorRepresentationReplicatorDeltaState::IsStateEqual(INetDeltaBaseState* OtherState){ return bool(); }
void FFGActorRepresentationReplicatorDeltaState::CountBytes(FArchive& Ar) const{ }
void FFGActorRepresentationReplicatorDeltaState::UpdateReplicatedRepresentationList(const AFGActorRepresentationManager* representationManager){ }
void FFGActorRepresentationReplicatorDeltaState::UpdateReplicatedMovementData(){ }
bool FFGActorRepresentationReplicatorDeltaState::HasPendingReplicationData() const{ return bool(); }
bool FFGActorRepresentationReplicator::NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams){ return bool(); }
bool FFGActorRepresentationReplicator::NetDeltaSerialize_Write(const AFGActorRepresentationManager* representationManager, FNetDeltaSerializeInfo& deltaParams) const{ return bool(); }
bool FFGActorRepresentationReplicator::NetDeltaSerialize_Read(AFGActorRepresentationManager* representationManager, FNetDeltaSerializeInfo& deltaParams){ return bool(); }
void FFGActorRepresentationReplicator::NetSerializeProperty_Write(FBitWriter& Ar, FProperty* Property, void* PropertyValuePtr, UPackageMap* PackageMap, INetSerializeCB& Callbacks){ }
void FFGActorRepresentationReplicator::NetSerializeProperty_Read(FBitReader& Ar, FProperty* Property, void* PropertyValuePtr, UPackageMap* PackageMap, INetSerializeCB& Callbacks, TDoubleLinkedList<FProperty*>& PropertyChain, UFGActorRepresentation* rootRepresentation){ }
AFGActorRepresentationManager* AFGActorRepresentationManager::Get(UWorld* world){ return nullptr; }
AFGActorRepresentationManager* AFGActorRepresentationManager::Get(UObject* worldContext){ return nullptr; }
AFGActorRepresentationManager::AFGActorRepresentationManager() : Super() {
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGActorRepresentationManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGActorRepresentationManager, mActorRepresentationReplicator);
}
void AFGActorRepresentationManager::BeginPlay(){ }
void AFGActorRepresentationManager::Tick(float DeltaSeconds){ }
UFGActorRepresentation* AFGActorRepresentationManager::CreateAndAddNewRepresentation(AActor* realActor, const bool isLocal , TSubclassOf<UFGActorRepresentation> representationClass){ return nullptr; }
UFGActorRepresentation* AFGActorRepresentationManager::CreateNewRepresentationNoActor(FVector location,  UTexture2D* compassTexture, FLinearColor compassColor, float lifeSpan, bool shouldShowInCompass, bool shouldShowOnMap, ERepresentationType representationType , TSubclassOf<UFGActorRepresentation> representationClass){ return nullptr; }
UFGActorRepresentation* AFGActorRepresentationManager::CreateAndAddNewRepresentationNoActor(FVector location,  UTexture2D* compassTexture, FLinearColor compassColor, float lifeSpan, bool shouldShowInCompass, bool shouldShowOnMap, ERepresentationType representationType , TSubclassOf<UFGActorRepresentation> representationClass){ return nullptr; }
void AFGActorRepresentationManager::AddRepresentation( UFGActorRepresentation* actorRepresentation){ }
bool AFGActorRepresentationManager::UpdateRepresentationOfActor(AActor* realActor){ return bool(); }
bool AFGActorRepresentationManager::UpdateRepresentation(UFGActorRepresentation* actorRepresentation){ return bool(); }
bool AFGActorRepresentationManager::RemoveRepresentationOfActor(AActor* realActor){ return bool(); }
void AFGActorRepresentationManager::RemoveRepresentation( UFGActorRepresentation* actorRepresentation){ }
UFGActorRepresentation* AFGActorRepresentationManager::FindActorRepresentation(const AActor* realActor){ return nullptr; }
UFGResourceNodeRepresentation* AFGActorRepresentationManager::FindResourceNodeRepresentation( AFGResourceNodeBase* resourceNode){ return nullptr; }
void AFGActorRepresentationManager::GetAllActorRepresentations(TArray<  UFGActorRepresentation* >& out_AllRepresentations){ }
void AFGActorRepresentationManager::DumpActorRepresentations(){ }
void AFGActorRepresentationManager::SetMapRepresentationTypeFilter( APawn* owningPlayerPawn, ERepresentationType type, bool visible){ }
void AFGActorRepresentationManager::SetCompassRepresentationTypeFilter( APawn* owningPlayerPawn, ERepresentationType type, bool visible){ }
bool AFGActorRepresentationManager::GetMapRepresentationTypeFilter( APawn* owningPlayerPawn, ERepresentationType type){ return bool(); }
bool AFGActorRepresentationManager::GetCompassRepresentationTypeFilter( APawn* owningPlayerPawn, ERepresentationType type){ return bool(); }
void AFGActorRepresentationManager::SetCompassViewDistanceForActorRepresentation(UFGActorRepresentation* actorRepresentation, ECompassViewDistance viewDistance){ }
AActor* AFGActorRepresentationManager::GetRealActorFromActorRepresentation(UFGActorRepresentation* actorRepresentation){ return nullptr; }
float AFGActorRepresentationManager::GetDistanceValueFromCompassViewDistance(ECompassViewDistance compassViewDistance){ return float(); }
void AFGActorRepresentationManager::AddReplicatedRepresentation(UFGActorRepresentation* representation){ }
void AFGActorRepresentationManager::RemoveReplicatedRepresentation(UFGActorRepresentation* representation){ }
void AFGActorRepresentationManager::UpdateReplicatedRepresentation(UFGActorRepresentation* representation){ }
UFGActorRepresentation* AFGActorRepresentationManager::CreateReplicatedRepresentation(const UClass* representationClass, const FGuid& representationId){ return nullptr; }
FNetworkGUID AFGActorRepresentationManager::FindNetworkGUIDForActor(const AActor* actor) const{ return FNetworkGUID(); }
