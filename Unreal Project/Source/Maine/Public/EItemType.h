// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
    None     UMETA(DisplayName = "None"),
    General   UMETA(DisplayName = "General"),
    ET_Two      UMETA(DisplayName = "Two"),
    ET_Three      UMETA(DisplayName = "Three"),
    ET_four    UMETA(DisplayName = "Four")
};
