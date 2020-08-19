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
	
public:

	FLocString();

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int StringTableID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int StringID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FName StringTableName;


};
