// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSporeFlower.h"

AFGSporeFlower::AFGSporeFlower() : Super() {
	this->mDeathTime = 10.0;
	this->mSignificanceRange = 8000.0;
}
void AFGSporeFlower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

}
void AFGSporeFlower::BeginPlay(){ }
void AFGSporeFlower::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
float AFGSporeFlower::TakeDamage(float damage,  FDamageEvent const& damageEvent, AController* eventInstigator, AActor* damageCauser){ return float(); }
void AFGSporeFlower::GainedSignificance_Implementation(){ }
void AFGSporeFlower::LostSignificance_Implementation(){ }
void AFGSporeFlower::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSporeFlower::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSporeFlower::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSporeFlower::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSporeFlower::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGSporeFlower::NeedTransform_Implementation(){ return bool(); }
bool AFGSporeFlower::ShouldSave_Implementation() const{ return bool(); }
bool AFGSporeFlower::ActorShouldTriggerFlower(AActor* actor){ return bool(); }
