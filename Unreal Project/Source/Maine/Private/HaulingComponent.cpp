// Fill out your copyright notice in the Description page of Project Settings.


#include "HaulingComponent.h"

// Sets default values for this component's properties
UHaulingComponent::UHaulingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Capacity = 5;
	// ...
}


// Called when the game starts
void UHaulingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHaulingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

