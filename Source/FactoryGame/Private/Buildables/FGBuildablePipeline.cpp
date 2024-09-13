// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePipeline.h"
#include "Components/SceneComponent.h"
#include "FGPipeConnectionComponent.h"
#include "FGSwatchGroup.h"
#include "Net/UnrealNetwork.h"

void FQuantizedPipelineIndicatorData::SetFlowPct(float pct){ }
float FQuantizedPipelineIndicatorData::GetFlowPct() const{ return float(); }
void FQuantizedPipelineIndicatorData::SetContentPct(float pct){ }
float FQuantizedPipelineIndicatorData::GetContentPct() const{ return float(); }
AFGBuildablePipeline::AFGBuildablePipeline() : Super() {
	this->mRadius = 65.0;
	this->mFlowLimit = 10.0;
	this->mFlowIndicatorClass = nullptr;
	this->mFlowIndicatorMinimumPipeLength = 0.0;
	this->mFlowIndicator = nullptr;
	this->mSoundSplineComponent = nullptr;
	this->mSoundSplineComponentEmitterInterval = 200.0;
	this->mSplineAudioEvent = nullptr;
	this->mMaxIndicatorTurnAngle = 3.0;
	this->mCachedFluidDescriptor = nullptr;
	this->mCurrentFluid = TEXT("");
	this->mLastContentForSound = 0.0;
	this->mLastFlowForSound = 0.0;
	this->mLastElapsedTime = 0.0;
	this->mLastFlowForSoundUpdateThreshold = 0.0;
	this->mRattleLimit = 0.5;
	this->mIsRattling = false;
	this->mStartRattleSoundEvent = nullptr;
	this->mStopRattleSoundEvent = nullptr;
	this->mUpdateSoundsTimerInterval = 0.0625;
	this->mConnection0 = CreateDefaultSubobject<UFGPipeConnectionComponent>(TEXT("PipelineConnection0"));
	this->mConnection1 = CreateDefaultSubobject<UFGPipeConnectionComponent>(TEXT("PipelineConnection1"));
	this->mFactoryTickFunction.TickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.bTickEvenWhenPaused = false;
	this->mFactoryTickFunction.bCanEverTick = true;
	this->mFactoryTickFunction.bStartWithTickEnabled = true;
	this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true;
	this->mFactoryTickFunction.TickInterval = 0.0;
	this->mSwatchGroup = UFGSwatchGroup_Pipeline::StaticClass();
	this->mConnection0->SetupAttachment(RootComponent);
	this->mConnection1->SetupAttachment(RootComponent);
}
void AFGBuildablePipeline::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildablePipeline, mFlowIndicator);
	DOREPLIFETIME(AFGBuildablePipeline, mIndicatorData);
}
void AFGBuildablePipeline::BeginPlay(){ }
void AFGBuildablePipeline::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGBuildablePipeline::Factory_Tick(float dt){ }
void AFGBuildablePipeline::PreUpgrade_Implementation(){ }
void AFGBuildablePipeline::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildablePipeline::GainedSignificance_Implementation(){ }
void AFGBuildablePipeline::LostSignificance_Implementation(){ }
float AFGBuildablePipeline::GetSignificanceRange(){ return float(); }
TSubclassOf< UFGPipeConnectionComponentBase > AFGBuildablePipeline::GetConnectionType_Implementation(){ return TSubclassOf<UFGPipeConnectionComponentBase>(); }
void AFGBuildablePipeline::SetCustomizationData_Native(const FFactoryCustomizationData& customizationData, bool skipCombine){ }
void AFGBuildablePipeline::ApplyCustomizationData_Native(const FFactoryCustomizationData& customizationData){ }
void AFGBuildablePipeline::StartIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter, bool isValid){ }
void AFGBuildablePipeline::StopIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildablePipeline::GetChildDismantleActors_Implementation(TArray< AActor* >& out_childDismantleActors) const{ }
FFluidBox* AFGBuildablePipeline::GetFluidBox(){ return nullptr; }
TArray< class UFGPipeConnectionComponent* > AFGBuildablePipeline::GetPipeConnections(){ return TArray<class UFGPipeConnectionComponent*>(); }
void AFGBuildablePipeline::OnFluidDescriptorSet(){ }
void AFGBuildablePipeline::CreateClearanceData( USplineComponent* splineComponent, const TArray< FSplinePointData >& splineData, const FTransform& pipeTransform, TArray< FFGClearanceData >& out_clearanceData, float maxDistance){ }
TArray< AFGBuildablePipeline* > AFGBuildablePipeline::Split(AFGBuildablePipeline* pipeline, float offset, bool connectNewPipelines, AActor* instigator){ return TArray<AFGBuildablePipeline*>(); }
AFGBuildablePipeline* AFGBuildablePipeline::Merge(TArray< AFGBuildablePipeline* > pipelines, AActor* instigator){ return nullptr; }
float AFGBuildablePipeline::GetIndicatorContentPct() const{ return float(); }
float AFGBuildablePipeline::GetIndicatorFlowPct() const{ return float(); }
float AFGBuildablePipeline::GetIndicatorContent() const{ return float(); }
float AFGBuildablePipeline::GetIndicatorFlow() const{ return float(); }
TSubclassOf< UFGItemDescriptor > AFGBuildablePipeline::GetFluidDescriptor() const{ return TSubclassOf<UFGItemDescriptor>(); }
AFGBuildablePipelineFlowIndicator* AFGBuildablePipeline::GetFlowIndicator() const{ return nullptr; }
void AFGBuildablePipeline::SmoothValues(float& flowPct,  float& contentPct, float dt) const{ }
void AFGBuildablePipeline::GetRawValues(float& flowPct,  float& contentPct) const{ }
void AFGBuildablePipeline::UpdateSounds(){ }
bool AFGBuildablePipeline::FindBestInidicatorPlacement(FTransform& out_transform){ return bool(); }
const FName AFGBuildablePipeline::mConnectionName0 = FName();
const FName AFGBuildablePipeline::mConnectionName1 = FName();
