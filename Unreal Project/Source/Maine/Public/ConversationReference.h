// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/Guid.h"
#include "ConversationReference.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FConversationReference
{
	GENERATED_BODY()

public:

	FConversationReference();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGuid ID;
};
