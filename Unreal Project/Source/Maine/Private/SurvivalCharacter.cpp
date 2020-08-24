// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalCharacter.h"

// Sets default values
ASurvivalCharacter::ASurvivalCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AttackHandlerComponent = CreateDefaultSubobject<UAttackHandlerComponent>("AttackHandlerComponent");
	AttractionComponent = CreateDefaultSubobject<UAttractionComponent>("AttractionComponent");
	BlockComponent = CreateDefaultSubobject<UBlockComponent>("BlockComponent");
	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
	//	CharMoveComp = CreateDefaultSubobject<UMaineCharMovementComponent>("CharMoveComp");
	ReactionComponent = CreateDefaultSubobject<UReactionComponent>("ReactionComponent");
	StatusEffectComponent = CreateDefaultSubobject<UStatusEffectComponent>("StatusEffectComponent");
	TeamComponent = CreateDefaultSubobject<UTeamComponent>("TeamComponent");
	ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>("ObsidianIDComponent");
}

// Called when the game starts or when spawned
void ASurvivalCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASurvivalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASurvivalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UCameraComponent* ASurvivalCharacter::GetCurrentCamera() { return NewObject<UCameraComponent>(); }