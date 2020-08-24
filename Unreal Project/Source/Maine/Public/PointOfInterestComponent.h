// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PointOfInterestDataAsset.h"
#include "Engine/DataAsset.h"
#include "PointOfInterestComponent.generated.h"


UCLASS(BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINE_API UPointOfInterestComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPointOfInterestComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Doh")
		UPointOfInterestDataAsset* PointOfInterestData;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
