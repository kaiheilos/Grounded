// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Maine\Public\HealthComponent.h>
#include <OEICommon\Public\ObsidianIDComponent.h>
#include <Maine\Public\TeamComponent.h>
#include <Maine\Public\PersistenceComponent.h>
#include <Maine\Public\ProceduralAnimationComponent.h>
#include <Runtime\AIModule\Classes\Perception\AIPerceptionStimuliSourceComponent.h>
#include <Runtime\NavigationSystem\Public\NavModifierComponent.h>
#include <Maine\Public\RootComponent.h>
#include <EBuildingTerrainConformMode.h>
#include <EBuildingState.h>
#include "Building.generated.h"

UCLASS(Blueprintable)
class MAINE_API ABuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		FDataTableRowHandle BuildingData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UHealthComponent* HealthComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UTeamComponent* TeamComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UProceduralAnimationComponent* ProceduralAnimationComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UNavModifierComponent* NavModifierComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UPersistenceComponent* PersistenceComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UObsidianIDComponent* ObsidianIDComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UAIPerceptionStimuliSourceComponent* PerceptionSourceComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		EBuildingTerrainConformMode TerrainConform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		EBuildingState BuildingState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		bool bIsAnchor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		bool bIsFoundation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		bool bProvidesSupport;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		float MaxSlope;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		TArray<uint8> OverrideValidSurfaces;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SurvivalComponent")
		FString GetName();
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void ServerPlaceBuilding();
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void PlaceBuilding();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SurvivalComponent")
		bool IsBeingPlaced();
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void SetUnderConstruction();
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void MulticastHandleBuildingPlacement();
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void OnRep_BuildingStateChanged();
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void OnRep_GridPosition();
};
