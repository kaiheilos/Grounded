// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalComponent.h"

// Sets default values for this component's properties
USurvivalComponent::USurvivalComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	HungerSettings = FHungerSettings();
	ThirstSettings = FThirstSettings();
	BreathSettings = FBreathSettings();
	// ...
}


// Called when the game starts
void USurvivalComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USurvivalComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	this->CurrentBreath = 0.0f;
	this->CurrentBreathRatio = 0.0f;
	this->CurrentWater = 0.0f;
	this->CurrentThirstRatio = 0.0f;
	this->CurrentFood = 0.0f;
	this->CurrentHungerRation = 0.0f;
}

float USurvivalComponent::GetBreathRatio()
{
	float Pawn = 0.0f;
	return Pawn;
}
float USurvivalComponent::GetHungerRatio()
{
	float Pawn = 0.0f;
	return Pawn;
}
float USurvivalComponent::GetThirstRatio()
{
	float Pawn = 0.0f;
	return Pawn;
}