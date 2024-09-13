// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGOptionInterfaceImpl.h"
#include "Settings/FGUserSettingCategory.h"

FVariant IFGOptionInterfaceImpl::GetOptionValue(const FString& strId, const FVariant& defaultValue) const{ return FVariant(); }
FVariant IFGOptionInterfaceImpl::GetOptionDisplayValue(const FString& strId, const FVariant& defaultValue) const{ return FVariant(); }
void IFGOptionInterfaceImpl::SetOptionValue(const FString& strId, const FVariant& value){ }
void IFGOptionInterfaceImpl::ForceSetOptionValue(const FString& strId, const FVariant& value, const UObject* instigator){ }
void IFGOptionInterfaceImpl::SubscribeToOptionUpdate(const FString& strId, const FOnOptionUpdated& onOptionUpdatedDelegate){ }
void IFGOptionInterfaceImpl::UnsubscribeToOptionUpdate(const FString& strId, const FOnOptionUpdated& onOptionUpdatedDelegate){ }
bool IFGOptionInterfaceImpl::IsDefaultValueApplied(const FString& strId) const{ return bool(); }
void IFGOptionInterfaceImpl::ApplyChanges(){ }
void IFGOptionInterfaceImpl::ResetAllSettingsToDefault(){ }
void IFGOptionInterfaceImpl::ResetAllSettingsInCategory(TSubclassOf<UFGUserSettingCategory> category, TSubclassOf<UFGUserSettingCategory> subCategory){ }
bool IFGOptionInterfaceImpl::HasAnyUnsavedOptionValueChanges() const{ return bool(); }
bool IFGOptionInterfaceImpl::HasPendingApplyOptionValue(const FString& cvar) const{ return bool(); }
void IFGOptionInterfaceImpl::RevertUnsavedChanges(){ }
bool IFGOptionInterfaceImpl::HasAnyPendingRestartOptionValue(const FString& cvar) const{ return bool(); }
bool IFGOptionInterfaceImpl::GetRequireSessionRestart() const{ return bool(); }
bool IFGOptionInterfaceImpl::GetRequireGameRestart() const{ return bool(); }
void IFGOptionInterfaceImpl::SubscribeToDynamicOptionUpdate(const FString& cvar, const FOptionUpdated& optionUpdatedDelegate){ }
void IFGOptionInterfaceImpl::UnsubscribeToDynamicOptionUpdate(const FString& cvar, const FOptionUpdated& optionUpdatedDelegate){ }
void IFGOptionInterfaceImpl::UnsubscribeToAllDynamicOptionUpdate(UObject* boundObject){ }
TArray<FUserSettingCategoryMapping> IFGOptionInterfaceImpl::GetCategorizedSettingWidgets(UObject* worldContext, UUserWidget* owningWidget){ return TArray<FUserSettingCategoryMapping>(); }
