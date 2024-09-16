// This file has been automatically generated by the Unreal Header Implementation tool

#include "Replication/FGConditionalPropertyReplicator.h"

FFGConditionalPropertyReplicatorState::FFGConditionalPropertyReplicatorState(UObject* stateOwner){ }
void FFGConditionalPropertyReplicatorState::AddReferencedObjects(FReferenceCollector& collector){ }
bool FFGConditionalPropertyReplicatorState::NetDeltaSerialize(FNetDeltaSerializeInfo& deltaParams){ return bool(); }
void FFGConditionalPropertyReplicatorState::EnsureStateOwnerIsTheSame(const UObject* stateOwner) const{ }
void FFGConditionalPropertyReplicatorState::InvalidateRelevantPropertiesCache(){ }
void FFGConditionalPropertyReplicatorState::MarkPropertyDirty(const FName& propertyName){ }
void FFGConditionalPropertyReplicatorState::InitializeClassData(UClass* inClass, FFGCondPropsClassData* classData){ }
void FFGConditionalPropertyReplicatorState::InitializeDerivedDataForProperty(FFGCondReplicatedProperty& inProperty, int32& customDeltaPropertyCount){ }
FProperty* FFGConditionalPropertyReplicatorState::ValidateReplicatorPropertyPreconditions(UClass* inClass){ return nullptr; }
void FFGConditionalPropertyReplicatorState::MarkPropertyDirty(int32 propertyIndex){ }
bool FFGConditionalPropertyReplicatorState::IsPropertyRelevantForConnection(const FNetDeltaSerializeInfo& deltaParams, const FFGCondReplicatedProperty& propData) const{ return bool(); }
FNetDeltaSerializeInfo FFGConditionalPropertyReplicatorState::MakeChildDeltaSerializeInfo(const FNetDeltaSerializeInfo& parentInfo){ return FNetDeltaSerializeInfo(); }
bool FFGConditionalPropertyReplicatorState::NetDeltaSerializeProperty(const FNetDeltaSerializeInfo& deltaParams, const FFGCondReplicatedProperty& property, void* propertyValuePtr, FFGConditionalPropertyReplicatorDeltaState* currentState){ return bool(); }
void FFGConditionalPropertyReplicator::MarkPropertyDirty(const FName& propertyName) const{ }
void FFGConditionalPropertyReplicator::InvalidateRelevantPropertiesCache() const{ }
FSimpleMulticastDelegate& FFGConditionalPropertyReplicator::GetOrComputeOnInvalidateRelevantPropertiesCache(UObject* stateOwner){ return *(new FSimpleMulticastDelegate); }
void FFGConditionalPropertyReplicator::AddReferencedObjects(FReferenceCollector& collector) const{ }
bool FFGConditionalPropertyReplicator::NetDeltaSerialize(FNetDeltaSerializeInfo& deltaParams){ return bool(); }