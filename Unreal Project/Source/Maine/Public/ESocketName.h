// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESocketName.generated.h"

UENUM(BlueprintType)
enum class ESocketName : uint8
{
    None     UMETA(DisplayName = "None"),
    ShoulderClose   UMETA(DisplayName = "ShoulderClose"),
    ET_Two      UMETA(DisplayName = "Two"),
    ET_Three      UMETA(DisplayName = "Three"),
    ET_four    UMETA(DisplayName = "Four")
};
