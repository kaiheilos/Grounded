// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecipeRequirements.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct  MAINE_API FRecipeRequirements
{
	GENERATED_USTRUCT_BODY()

public:

	FRecipeRequirements()
		: ItemCount(0)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FDataTableRowHandle Item;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int ItemCount;

};