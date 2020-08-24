// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SurvivalCharacter.h"
#include <Maine\Public\AttackHandlerComponent.h>
#include <Maine\Public\AttractionComponent.h>
#include <Maine\Public\BlockComponent.h>
#include <Maine\Public\BuildingPlacementComponent.h>
#include <Maine\Public\EquipmentComponent.h>
#include <Maine\Public\HaulingComponent.h>
#include <Maine\Public\HealthComponent.h>
#include <Maine\Public\InventoryComponent.h>
#include <Maine\Public\MaineCharMovementComponent.h>
#include <Maine\Public\PersistenceComponent.h>
#include <Maine\Public\ScreenEffectComponent.h>
#include <Maine\Public\ReactionComponent.h>
#include <Maine\Public\StaminaComponent.h>
#include <Maine\Public\StatusEffectComponent.h>
#include <Maine\Public\SurvivalComponent.h>
#include <Maine\Public\TeamComponent.h>
#include <OEICommon\Public\ObsidianIDComponent.h>
#include "SurvivalPlayerCharacter.generated.h"

UCLASS()
class MAINE_API ASurvivalPlayerCharacter : public ASurvivalCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASurvivalPlayerCharacter();



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UBuildingPlacementComponent* BuildingPlacementComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UEquipmentComponent* EquipmentComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UHaulingComponent* HaulingComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UInventoryComponent* InventoryComponent;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharMoveComp")
//		UMaineCharMovementComponent* CharMoveComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UPersistenceComponent* PersistenceComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UScreenEffectComponent* ScreenEffectComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UStaminaComponent* StaminaComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		USurvivalComponent* SurvivalComponent;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
