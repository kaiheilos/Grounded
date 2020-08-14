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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		FHungerSettings HungerSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		FThirstSettings ThirstSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		FBreathSettings BreathSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		float CurrentBreath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		float CurrentWater;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalComponent")
		float CurrentFood;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SurvivalComponent")
		float GetBreathAdjustmentRate();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SurvivalComponent")
		float GetBreathRatio();
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void RestoreBreath(float BreathAmount);
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void SetCurrentBreath(float NewBreath);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SurvivalComponent")
		bool IsFullBreath();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SurvivalComponent")
		float GetHungerRatio();
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void SetCurrentFood(float NewFood);
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void AddFood(float FoodAmount);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SurvivalComponent")
		float GetThirstRatio();
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void SetCurrentWater(float NewWater);
	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void AddWater(float WaterAmount);


	UFUNCTION(BlueprintCallable, Category = "SurvivalComponent")
		void Rest(float RestDuration);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
