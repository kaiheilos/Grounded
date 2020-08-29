// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <Maine\Public\Building.h>
#include "BuildingPlacementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINE_API UBuildingPlacementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBuildingPlacementComponent();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float ValidSlotScore;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int GroundSnapDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float FreeBuildingPlacementDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		ABuilding* PendingBuilding;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
