// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ConversationReference.h"
#include "Engine/StaticMesh.h"
#include "Engine/SkeletalMesh.h"
#include "InspectData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FInspectData
{
	GENERATED_BODY()

public:

	FInspectData();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UObject* InspectModelOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UStaticMesh* InspectStaticMeshOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		USkeletalMesh* InspectSkeletalMeshOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float ModelScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FConversationReference Conversation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int ConversationStartNode;
};