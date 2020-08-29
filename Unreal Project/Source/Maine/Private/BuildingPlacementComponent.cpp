// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingPlacementComponent.h"

// Sets default values for this component's properties
UBuildingPlacementComponent::UBuildingPlacementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	ValidSlotScore = 0.0f;
	GroundSnapDistance = 0;
	FreeBuildingPlacementDistance = 0.0f;
	// ...
}


// Called when the game starts
void UBuildingPlacementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBuildingPlacementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

