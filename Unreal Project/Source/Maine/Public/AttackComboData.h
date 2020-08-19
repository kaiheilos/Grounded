// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttackComboData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FAttackComboData
{
	GENERATED_BODY()

public:

	FAttackComboData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FDataTableRowHandle> Attacks;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool bLoop;
};