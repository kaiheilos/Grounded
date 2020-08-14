// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BreathSettings.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FBreathSettings
{
	GENERATED_BODY()

public:

	FBreathSettings();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float AdjustmentPerSecond;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float RegenPerSecond;

};
