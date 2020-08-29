// Fill out your copyright notice in the Description page of Project Settings.


#include "Building.h"

// Sets default values
ABuilding::ABuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
	TeamComponent = CreateDefaultSubobject<UTeamComponent>("TeamComponent");
	ProceduralAnimationComponent = CreateDefaultSubobject<UProceduralAnimationComponent>("ProceduralAnimationComponent");
	NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>("NavModifierComponent");
	PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>("PersistenceComponent");
	ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>("ObsidianIDComponent");
	PerceptionSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>("PerceptionStimuliSourceComponent");
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	ProceduralAnimationComponent->AttachParent = RootComponent;
}

// Called when the game starts or when spawned
void ABuilding::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString ABuilding::GetName() { return ""; }
void ABuilding::ServerPlaceBuilding() {  }
void ABuilding::PlaceBuilding() {  }
bool ABuilding::IsBeingPlaced() { return true; }
void ABuilding::SetUnderConstruction() {  }
void ABuilding::MulticastHandleBuildingPlacement() {  }
void ABuilding::OnRep_BuildingStateChanged() {  }
void ABuilding::OnRep_GridPosition() {  }