// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HungerSettings.h"
#include "ThirstSettings.h"
#include "BreathSettings.h"
#include "SurvivalComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINE_API USurvivalComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USurvivalComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerSurvival")
		FHungerSettings HungerSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerSurvival")
		FThirstSettings ThirstSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerSurvival")
		FBreathSettings BreathSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerSurvival")
		float CurrentBreath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerSurvival")
		float CurrentWater;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerSurvival")
		float CurrentFood;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerSurvival")
		float GetBreathAdjustmentRate();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerSurvival")
		float GetBreathRatio();
	UFUNCTION(BlueprintCallable, Category = "PlayerSurvival")
		void RestoreBreath(float BreathAmount);
	UFUNCTION(BlueprintCallable, Category = "PlayerSurvival")
		void SetCurrentBreath(float NewBreath);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerSurvival")
		bool IsFullBreath();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerSurvival")
		float GetHungerRatio();
	UFUNCTION(BlueprintCallable, Category = "PlayerSurvival")
		void SetCurrentFood(float NewFood);
	UFUNCTION(BlueprintCallable, Category = "PlayerSurvival")
		void AddFood(float FoodAmount);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerSurvival")
		float GetThirstRatio();
	UFUNCTION(BlueprintCallable, Category = "PlayerSurvival")
		void SetCurrentWater(float NewWater);
	UFUNCTION(BlueprintCallable, Category = "PlayerSurvival")
		void AddWater(float WaterAmount);


	UFUNCTION(BlueprintCallable, Category = "PlayerSurvival")
		void Rest(float RestDuration);
};
