// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include <PerkComponent.h>
#include "SurvivalPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API ASurvivalPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	ASurvivalPlayerState();

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
			UPerkComponent* PerkComponent;
};
