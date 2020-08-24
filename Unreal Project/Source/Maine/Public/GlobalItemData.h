// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include <GameplayTagContainer.h>
#include "GlobalItemData.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API UGlobalItemData : public UDataAsset
{
	GENERATED_BODY()

public:
		UGlobalItemData() {};
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TMap<FGameplayTag, int32> StackSizes;

};
