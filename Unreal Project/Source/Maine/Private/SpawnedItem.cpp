// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnedItem.h"

// Sets default values
ASpawnedItem::ASpawnedItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>("ObsidianIDComponent");
}

// Called when the game starts or when spawned
void ASpawnedItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnedItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

