// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HungerSettings.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FHungerSettings
{
	GENERATED_BODY()
	
public:

	FHungerSettings();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float InitialValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float AdjustmentPerSecond;

};
