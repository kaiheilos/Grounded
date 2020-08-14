 // Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalPlayerCharacter.h"

// Sets default values
ASurvivalPlayerCharacter::ASurvivalPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AttackHandlerComponent = CreateDefaultSubobject<UAttackHandlerComponent>("AttackHandlerComponent");
	AttractionComponent = CreateDefaultSubobject<UAttractionComponent>("AttractionComponent");
	BlockComponent = CreateDefaultSubobject<UBlockComponent>("BlockComponent");
	BuildingPlacementComponent = CreateDefaultSubobject<UBuildingPlacementComponent>("BuildingPlacementComponent");
	EquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>("EquipmentComponent");
	HaulingComponent = CreateDefaultSubobject<UHaulingComponent>("HaulingComponent");
	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("InventoryComponent");
//	CharMoveComp = CreateDefaultSubobject<UMaineCharMovementComponent>("CharMoveComp");
	PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>("PersistenceComponent");
	ReactionComponent = CreateDefaultSubobject<UReactionComponent>("ReactionComponent");
	ScreenEffectComponent = CreateDefaultSubobject<UScreenEffectComponent>("ScreenEffectComponent");
	StaminaComponent = CreateDefaultSubobject<UStaminaComponent>("StaminaComponent");
	StatusEffectComponent = CreateDefaultSubobject<UStatusEffectComponent>("StatusEffectComponent");
	SurvivalComponent = CreateDefaultSubobject<USurvivalComponent>("SurvivalComponent");
	TeamComponent = CreateDefaultSubobject<UTeamComponent>("TeamComponent");
	ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>("ObsidianIDComponent");
}

// Called when the game starts or when spawned
void ASurvivalPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASurvivalPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASurvivalPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

