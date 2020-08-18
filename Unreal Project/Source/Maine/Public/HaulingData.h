// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ESocketName.h>
#include "HaulingData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FHaulingData
{
	GENERATED_BODY()

public:

	FHaulingData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		ESocketName HaulingSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int MaxHaulCount;

};
