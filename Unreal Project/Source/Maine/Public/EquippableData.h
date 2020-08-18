// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RecipeRequirements.h"
#include "Sound/SoundWave.h"
#include "Engine/DataTable.h"
#include "EquippableData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FEquippableData
{
	GENERATED_USTRUCT_BODY()

public:

	FEquippableData()
		: Durability (0.0f)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		USoundWave* EquipAudio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float Durability;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float DamageReduction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FDataTableRowHandle> StatusEffects;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FRecipeRequirements> RepairRecipe;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGameplayTag HairType;

};
