// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "SurvivalPlayerCharacter.h"
#include "SurvivalGameplayStatics.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API USurvivalGameplayStatics : public UGameplayStatics
{
	GENERATED_BODY()
	
public:
	// Called when the game starts or when spawned
	UFUNCTION(BlueprintCallable, Category="Grounded")
	static ASurvivalPlayerCharacter* GetLocalSurvivalPlayerCharacter();

};
