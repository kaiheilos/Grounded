// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ThirstSettings.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FThirstSettings
{
	GENERATED_BODY()

public:

	FThirstSettings();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float InitialValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float AdjustmentPerSecond;

};