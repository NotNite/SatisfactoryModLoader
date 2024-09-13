// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCentralStorageSubsystem.h"
#include "Net/UnrealNetwork.h"

AFGCentralStorageSubsystem::AFGCentralStorageSubsystem() : Super() {

}
AFGCentralStorageSubsystem* AFGCentralStorageSubsystem::Get(UWorld* world){ return nullptr; }
AFGCentralStorageSubsystem* AFGCentralStorageSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGCentralStorageSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGCentralStorageSubsystem, mStoredItems);
	DOREPLIFETIME(AFGCentralStorageSubsystem, mItemStackLimit);
}
void AFGCentralStorageSubsystem::BeginPlay(){ }
void AFGCentralStorageSubsystem::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGCentralStorageSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
int32 AFGCentralStorageSubsystem::GetNumItemsFromCentralStorage(TSubclassOf<  UFGItemDescriptor > itemClass){ return int32(); }
void AFGCentralStorageSubsystem::GetAllItemsFromCentralStorage(TArray<FItemAmount>& out_allItems){ }
int32 AFGCentralStorageSubsystem::TryRemoveItemsFromCentralStorage(TSubclassOf<  UFGItemDescriptor > itemClass, const int32 numToRemove){ return int32(); }
void AFGCentralStorageSubsystem::AddCentralStorage( AFGCentralStorageContainer* centralStorage){ }
void AFGCentralStorageSubsystem::RemoveCentralStorage( AFGCentralStorageContainer* centralStorage){ }
bool AFGCentralStorageSubsystem::UploadItemFromInventoryToCentralStorage( UFGInventoryComponent* inventoryComponent, int32 slotIndexToRemoveFrom, TSubclassOf<  UFGItemDescriptor > inClass){ return bool(); }
bool AFGCentralStorageSubsystem::CanUploadItemsToCentralStorage(TSubclassOf<class UFGItemDescriptor> inClass) const{ return bool(); }
int32 AFGCentralStorageSubsystem::GetCentralStorageItemLimit(TSubclassOf<  UFGItemDescriptor > inClass) const{ return int32(); }
float AFGCentralStorageSubsystem::GetCentralStorageTimeToUpload() const{ return float(); }
void AFGCentralStorageSubsystem::UpdateItemStackLimit(){ }
void AFGCentralStorageSubsystem::SortItemsInStorage(){ }
void AFGCentralStorageSubsystem::OnRep_StorageUpdated() const{ }
void AFGCentralStorageSubsystem::Client_NewItemAddedToCentralStorage_Implementation(TSubclassOf<UFGItemDescriptor> inClass){ }
void AFGCentralStorageSubsystem::OnCentralStorageItemLimitReachedUpdated(TSubclassOf<  UFGItemDescriptor > itemDescriptor, bool itemLimitReached){ }
