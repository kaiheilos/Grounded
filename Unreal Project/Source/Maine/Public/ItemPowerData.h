// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include <EInteractAnimType.h>
#include "ItemPowerData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FItemPowerData
{
	GENERATED_BODY()

public:

	FItemPowerData();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool UsesPower;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool AlwaysOn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool bConsumesPowerDuringRest;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGameplayTag UsesPowerType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGameplayTag ProvidesPower;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float TotalPowerTimeInHours;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float TotalCharges;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		EInteractAnimType ChargingAnimType;

};