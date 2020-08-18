// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ESpoilState.h>
#include "Engine/DataTable.h"
#include "SpoilData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FSpoilData
{
	GENERATED_BODY()

public:

	FSpoilData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		ESpoilState SpoilState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FDataTableRowHandle SpoiledResultItem;

};
