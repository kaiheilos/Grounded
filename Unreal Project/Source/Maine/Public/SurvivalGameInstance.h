// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GlobalItemData.h"
#include "SurvivalGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API USurvivalGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
		USurvivalGameInstance();
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UGlobalItemData* GlobalItemData;

};
