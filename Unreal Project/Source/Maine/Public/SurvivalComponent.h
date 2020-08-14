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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TestStruct")
		FHungerSettings HungerSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TestStruct")
		FThirstSettings ThirstSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TestStruct")
		FBreathSettings BreathSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float CurrentBreath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float CurrentBreathRatio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float CurrentWater;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float CurrentThirstRatio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float CurrentFood;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float CurrentHungerRation;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Grounded")
		float GetBreathRatio();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Grounded")
		float GetHungerRatio();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Grounded")
		float GetThirstRatio();
};
