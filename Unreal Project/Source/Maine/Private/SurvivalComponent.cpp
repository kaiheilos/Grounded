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
	CurrentBreath = 0.0f;
	CurrentWater = 0.0f;
	CurrentFood = 0.0f;
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

}

float USurvivalComponent::GetBreathAdjustmentRate() { return 0.0f; }
float USurvivalComponent::GetBreathRatio() { return 0.0f; }
void USurvivalComponent::RestoreBreath(float BreathAmount) { }
void USurvivalComponent::SetCurrentBreath(float NewBreath) { }
bool USurvivalComponent::IsFullBreath() { return true; }
float USurvivalComponent::GetHungerRatio() { return 0.0f; }
void USurvivalComponent::SetCurrentFood(float NewFood) { }
void USurvivalComponent::AddFood(float FoodAmount) { }
float USurvivalComponent::GetThirstRatio() { return 0.0f; }
void USurvivalComponent::SetCurrentWater(float NewWater) {  }
void USurvivalComponent::AddWater(float WaterAmount) { }
void USurvivalComponent::Rest(float RestDuration) {  }