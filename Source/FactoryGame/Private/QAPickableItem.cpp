// This file has been automatically generated by the Unreal Header Implementation tool

#include "QAPickableItem.h"

AQAPickableItem::AQAPickableItem() : Super() {
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AQAPickableItem::BeginPlay(){ }
void AQAPickableItem::Tick(float DeltaTime){ }
