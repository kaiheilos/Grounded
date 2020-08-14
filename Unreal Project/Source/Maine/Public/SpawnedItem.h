// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <OEICommon/Public/ObsidianIDComponent.h>
#include "SpawnedItem.generated.h"


UCLASS()
class MAINE_API ASpawnedItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnedItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Helper")
		UObsidianIDComponent* ObsidianIDComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
