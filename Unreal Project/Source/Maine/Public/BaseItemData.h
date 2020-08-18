// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LocString.h"
#include "SpawnedItem.h"
#include "EItemType.h"
#include <EEquipmentSlot.h>
#include <EquippableData.h>
#include <AttackComboData.h>
#include <HaulingData.h>
#include <SpoilData.h>
#include <ThrowData.h>
#include <ItemPowerData.h>
#include <InspectData.h>
#include <GlidingData.h>
#include <AttackAmmoData.h>
#include <Runtime\Engine\Classes\Engine\World.h>
#include "BaseItemData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FBaseItemData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FBaseItemData()
		: bWorldMarker(true)
	{}

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FLocString LocalizedDisplayName;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			TArray<UObject*> SearchableKeywords;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FLocString LocalizedDescription;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			UTexture2D* Icon;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			EItemType ItemType;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FGameplayTag StackSizeTag;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			TArray<FDataTableRowHandle> UnlockRecipes;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			TArray<FDataTableRowHandle> ResearchUnlockRecipes;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			TArray<FDataTableRowHandle> TechTreeUnlocks;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			TSubclassOf<class ASpawnedItem> WorldActor;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			bool bWorldMarker;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			int Tier;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			TSubclassOf<class ASpawnedItem> EquippedActor;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FEquippableData EquippableData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			EEquipmentSlot Slot;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			bool TwoHanded;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			int Stance;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			ESocketName OverrideEquipSocket;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			bool bIsLightSource;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			bool bCanBlock;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FAttackComboData AttackComboData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FAttackComboData AlternateAttackComboData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FAttackComboData SwimmingAttackComboData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			TArray<FAttackAmmoData> AmmoAttackData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			TArray<FDataTableRowHandle> ConsumableData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			USoundWave* ConsumeAudio;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			EInteractAnimType ConsumeAnimType;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			bool bBurgleQuestCanAnalyze;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			int BurgleQuestAnalyzeRewardLevel;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			UObject* OverrideTemplateConsumeAction;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FHaulingData HaulingData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			TArray<UObject*> ProcessingOptions;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			UObject* ProcessingActorOverride;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FSpoilData SpoilData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FThrowData ThrowData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FItemPowerData PowerData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FInspectData InspectData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FGlidingData GlidingData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FGameplayTagContainer ResourceCategory;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			FGameplayTagContainer Tags;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			USoundWave* PickupAudio;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			USoundWave* AudioData;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
			EInteractAnimType InteractAnimType;




};
