// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <EGlidingStyle.h>
#include "GlidingData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FGlidingData
{
	GENERATED_BODY()

public:

	FGlidingData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		EGlidingStyle Style;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float StaminaDrainPerSecond;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float ForwardAcceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float MaxForwardVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float DescendSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float DescendDrag;
};
