// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGColoredVTXAnimMesh.h"

void UFGAnimationTimeLineEntryBase::TryFireNotify(const float& Distance, const float& AnimDuration, const float& DeltaTime, UFGColoredVTXAnimMesh* Owner,const UFGAnimationTimeLineEntryBase* Entry, bool bForceSeek){ }
void UFGAnimationTimeLineSFXEntry::Fire(UFGColoredVTXAnimMesh* Owner, float CurrentTime , bool bForceSeek) const{ }
void UFGAnimationTimeLineVFXEntry::Fire(UFGColoredVTXAnimMesh* Owner, float CurrentTime , bool bForceSeek) const{ }
FTransform UFGAnimationTimeLineAnimatedEntry::GetTransformAtTime(float Time) const{ return FTransform(); }
void UFGAnimationTimeLineAnimatedEntry::SetCurveInfoAtTime(float Time, FVector Location, FRotator Rotation){ }
void UFGAnimationTimeLineAnimatedEntry::ResampleCurve(){ }
void UFGAnimationTimeLineAnimatedVFXEntry::Fire(UFGColoredVTXAnimMesh* Owner, float CurrentTime, bool bForceSeek) const{ }
void UFGAnimationTimeLineAnimatedVFXEntry::Deactivate(UFGColoredVTXAnimMesh* Owner) const{ }
void UVTXAnimManager::Tick(float DeltaTime){ }
void UVTXAnimManager::AddRelevantComponents(UFGColoredVTXAnimMesh* Mesh){ }
void UVTXAnimManager::RemoveRelevantComponents(UFGColoredVTXAnimMesh* Mesh){ }
void UVTXAnimManager::DequeueEntries(){ }
bool UVTXAnimManager::GetPlayerViewpointAndLocation(FVector& OutVector, FRotator& OutRotation) const{ return bool(); }
#if WITH_EDITORONLY_DATA
#endif 
#if WITH_EDITOR
void UFGColoredVTXAnimMesh::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent){ Super::PostEditChangeProperty(PropertyChangedEvent); }
void UFGColoredVTXAnimMesh::SampleTimelineDataFromEntry(UAnimSequence* Sequence, TSubclassOf<AFGBuildable> Target, FName ComponentName){ }
#endif 
UFGColoredVTXAnimMesh::UFGColoredVTXAnimMesh() : Super() {
	this->mSignificanceRange = 5000.0;
	this->mMaxDrawRangeCable = 0.0;
	this->mWireMesh = nullptr;
	this->mAnimationAsset = nullptr;
	this->mStartupSequenceID = 1;
	this->mShutdownSequenceID = 1;
	this->mCurrentSequence = -1;
	this->mMinimumRangeForStartupAnimation = 20000.0;
	this->mSpawnedWireMeshComponent = nullptr;
	this->mWireMeshTimeAdjustment = 0.0;
	this->mProductionStateID = 22;
}
void UFGColoredVTXAnimMesh::UpdateEffectTimeline(const float Dt, const float Dist, const float WorldTime){ }
void UFGColoredVTXAnimMesh::BeginPlay(){ }
void UFGColoredVTXAnimMesh::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void UFGColoredVTXAnimMesh::GainedSignificance_Implementation(){ }
void UFGColoredVTXAnimMesh::LostSignificance_Implementation(){ }
void UFGColoredVTXAnimMesh::StopAnimation(float WorldTime){ }
void UFGColoredVTXAnimMesh::StartProductionAnimation(float WorldTime){ }
void UFGColoredVTXAnimMesh::BeginStopAnimation(float WorldTime){ }
void UFGColoredVTXAnimMesh::BeginStartAnimation(float WorldTime){ }
bool UFGColoredVTXAnimMesh::ShouldFireEffects() const{ return bool(); }
void UFGColoredVTXAnimMesh::StopEffects(){ }
void UFGColoredVTXAnimMesh::SpawnAndSetupWireMesh(){ }
void UFGColoredVTXAnimMesh::CleanupWireMesh(){ }
void UFGColoredVTXAnimMesh::OnStartAnimationFinished(){ }
void UFGColoredVTXAnimMesh::OnShutdownAnimationFinished(){ }
