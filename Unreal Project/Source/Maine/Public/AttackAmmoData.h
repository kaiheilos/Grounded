// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttackAmmoData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FAttackAmmoData
{
	GENERATED_BODY()

public:

	FAttackAmmoData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FDataTableRowHandle> AmmoItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FDataTableRowHandle> Attack;
};