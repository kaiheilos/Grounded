// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	CurrentDamage = 0.0f;
	MaxHealth = 0.0f;
	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UHealthComponent::GetMaxHealth() { return 0.0f; }
float UHealthComponent::GetCurrentHealth() { return 0.0f; }
float UHealthComponent::GetDamageReduction() { return 0.0f; }
float UHealthComponent::GetHealthRatio() { return 0.0f; }
void UHealthComponent::SetCurrentDamage(float DesiredDamage) {  }
void UHealthComponent::SetCurrentHealth(float DesiredHealth) {  }