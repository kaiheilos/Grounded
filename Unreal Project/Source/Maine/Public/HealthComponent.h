// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINE_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
		float CurrentDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
		float MaxHealth;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "HealthComponent")
		float GetMaxHealth();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "HealthComponent")
		float GetCurrentHealth();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "HealthComponent")
		float GetDamageReduction();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "HealthComponent")
		float GetHealthRatio();
	UFUNCTION(BlueprintCallable, Category = "HealthComponent")
		void SetCurrentDamage(float DesiredDamage);
	UFUNCTION(BlueprintCallable, Category = "HealthComponent")
		void SetCurrentHealth(float DesiredHealth);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
