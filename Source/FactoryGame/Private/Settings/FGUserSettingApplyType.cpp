// This file has been automatically generated by the Unreal Header Implementation tool

#include "Settings/FGUserSettingApplyType.h"

UFGUserSettingApplyType* UFGUserSettingApplyType::GetUserSettingApplyType(IFGOptionInterface* owner,  UFGUserSetting* inUserSetting){ return nullptr; }
FString UFGUserSettingApplyType::VariantAsString(const FVariant& Variant){ return FString(); }
bool UFGUserSettingApplyType::StringAsVariant(const FString& String, EVariantTypes VariantType, FVariant& OutVariant){ return bool(); }
void UFGUserSettingApplyType::Init( UFGUserSetting* inUserSetting){ }
void UFGUserSettingApplyType::TryRegisterCvarValue(){ }
void UFGUserSettingApplyType::TryUpdateCvarValue(){ }
bool UFGUserSettingApplyType::CheckCvarValueForUpdates(){ return bool(); }
bool UFGUserSettingApplyType::OnApply(bool markDirty){ return bool(); }
void UFGUserSettingApplyType::SetValue(FVariant newValue){ }
void UFGUserSettingApplyType::ForceSetValue(FVariant newValue, bool bClearPendingValue){ }
bool UFGUserSettingApplyType::ForceSetPendingAppliedValue(FVariant newValue){ return bool(); }
void UFGUserSettingApplyType::OverrideDefaultValue(FVariant newDefaultValue){ }
void UFGUserSettingApplyType::ResetToDefaultValue(){ }
void UFGUserSettingApplyType::ClearPendingChanges(){ }
void UFGUserSettingApplyType::NotifySubscribers(){ }
void UFGUserSettingApplyType::PurgeDeadSubscribers(){ }
void UFGUserSettingApplyType::AddSubscriber(const FOnOptionUpdated& onOptionUpdatedDelegate){ }
void UFGUserSettingApplyType::AddSubscriber(const FOptionUpdated& onOptionUpdatedDelegate){ }
void UFGUserSettingApplyType::RemoveSubscriber(const FOnOptionUpdated& onOptionUpdatedDelegate){ }
void UFGUserSettingApplyType::RemoveSubscriber(const FOptionUpdated& onOptionUpdatedDelegate){ }
void UFGUserSettingApplyType::RemoveObjectAsSubscriber(UObject* boundObject){ }
FVariant UFGUserSettingApplyType::GetDisplayValue() const{ return FVariant(); }
FVariant UFGUserSettingApplyType::GetValueToSave() const{ return FVariant(); }
FVariant UFGUserSettingApplyType::GetPendingAppliedValue() const{ return FVariant(); }
bool UFGUserSettingApplyType::HasPendingChanges() const{ return bool(); }
bool UFGUserSettingApplyType::IsDefaultValueApplied() const{ return bool(); }
void UFGUserSettingApplyType::SetOptionRowWidget( UFGDynamicOptionsRow* inOptionRowWidget){ }
void UFGUserSettingApplyType::GetDebugData(TArray<FString>& out_debugData){ }
TScriptInterface<IFGOptionInterface> UFGUserSettingApplyType::GetOwnerOptionInterface() const{ return TScriptInterface<IFGOptionInterface>(); }
bool UFGUserSettingApplyType::IsInMainMenu() const{ return bool(); }
bool UFGUserSettingApplyType_UpdateInstantly::OnApply(bool markDirty){ return bool(); }
void UFGUserSettingApplyType_UpdateInstantly::SetValue(FVariant newValue){ }
void UFGUserSettingApplyType_UpdateInstantly::ClearPendingChanges(){ }
bool UFGUserSettingApplyType_RequireGameRestart::OnApply(bool markDirty){ return bool(); }
void UFGUserSettingApplyType_RequireGameRestart::OnPreRestartGame(){ }
void UFGUserSettingApplyType_RequireGameRestart::ForceSetValue(FVariant newValue, bool bClearPendingValue){ }
bool UFGUserSettingApplyType_RequireGameRestart::ForceSetPendingAppliedValue(FVariant newValue){ return bool(); }
void UFGUserSettingApplyType_RequireGameRestart::ResetToDefaultValue(){ }
FVariant UFGUserSettingApplyType_RequireGameRestart::GetDisplayValue() const{ return FVariant(); }
bool UFGUserSettingApplyType_RequireGameRestart::HasGameRestartRequiredChanges() const{ return bool(); }
FVariant UFGUserSettingApplyType_RequireGameRestart::GetValueToSave() const{ return FVariant(); }
FVariant UFGUserSettingApplyType_RequireGameRestart::GetPendingAppliedValue() const{ return FVariant(); }
void UFGUserSettingApplyType_RequireGameRestart::GetDebugData(TArray<FString>& out_debugData){ }
bool UFGUserSettingApplyType_RequireSessionRestart::OnApply(bool markDirty){ return bool(); }
void UFGUserSettingApplyType_RequireSessionRestart::OnPreSessionRestart(){ }
void UFGUserSettingApplyType_RequireSessionRestart::ForceSetValue(FVariant newValue, bool bClearPendingValue){ }
bool UFGUserSettingApplyType_RequireSessionRestart::ForceSetPendingAppliedValue(FVariant newValue){ return bool(); }
void UFGUserSettingApplyType_RequireSessionRestart::ResetToDefaultValue(){ }
FVariant UFGUserSettingApplyType_RequireSessionRestart::GetDisplayValue() const{ return FVariant(); }
bool UFGUserSettingApplyType_RequireSessionRestart::HasSessionRestartRequiredChanges() const{ return bool(); }
FVariant UFGUserSettingApplyType_RequireSessionRestart::GetValueToSave() const{ return FVariant(); }
FVariant UFGUserSettingApplyType_RequireSessionRestart::GetPendingAppliedValue() const{ return FVariant(); }
void UFGUserSettingApplyType_RequireSessionRestart::GetDebugData(TArray<FString>& out_debugData){ }
