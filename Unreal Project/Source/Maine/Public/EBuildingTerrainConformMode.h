// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EBuildingTerrainConformMode.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EBuildingTerrainConformMode : uint8
{
    AlwaysLevel   UMETA(DisplayName = "AlwaysLevel"),
    MatchTerrain   UMETA(DisplayName = "MatchTerrain"),
    None     UMETA(DisplayName = "None"),
        
};
