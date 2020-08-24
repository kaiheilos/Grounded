// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PointOfInterestDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class MAINE_API UPointOfInterestDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int Tier;

};
