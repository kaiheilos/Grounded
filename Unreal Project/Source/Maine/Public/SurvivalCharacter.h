// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Maine\Public\AttackHandlerComponent.h>
#include <Maine\Public\AttractionComponent.h>

#include <Maine\Public\BlockComponent.h>
#include <Maine\Public\HealthComponent.h>


#include <Maine\Public\MaineCharMovementComponent.h>
#include <Maine\Public\ReactionComponent.h>
#include <Maine\Public\StatusEffectComponent.h>
#include <Maine\Public\TeamComponent.h>
#include "Camera/CameraComponent.h"
#include <OEICommon\Public\ObsidianIDComponent.h>
#include "SurvivalCharacter.generated.h"

UCLASS()
class MAINE_API ASurvivalCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASurvivalCharacter();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UAttackHandlerComponent* AttackHandlerComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UAttractionComponent* AttractionComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UBlockComponent* BlockComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UHealthComponent* HealthComponent;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharMoveComp")
//		UMaineCharMovementComponent* CharMoveComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UReactionComponent* ReactionComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UStatusEffectComponent* StatusEffectComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UTeamComponent* TeamComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UObsidianIDComponent* ObsidianIDComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "HealthComponent")
		UCameraComponent* GetCurrentCamera();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
