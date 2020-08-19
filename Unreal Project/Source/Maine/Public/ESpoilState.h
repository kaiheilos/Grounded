// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESpoilState.generated.h"

UENUM(BlueprintType)
enum class ESpoilState : uint8
{
    None     UMETA(DisplayName = "None"),
    ET_One   UMETA(DisplayName = "One"),
    ET_Two      UMETA(DisplayName = "Two"),
    ET_Three      UMETA(DisplayName = "Three"),
    ET_four    UMETA(DisplayName = "Four")
};

