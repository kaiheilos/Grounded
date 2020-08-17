// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LocString.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FLocString
{
	GENERATED_USTRUCT_BODY()
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int StringTableID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int StringID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UNameProperty* StringTableName;

	FLocString()
	{
		StringTableID = 0.0f;
		StringID = 0.0f;
		StringTableName;
	}

};
