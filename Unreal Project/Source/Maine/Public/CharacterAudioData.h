// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundCue.h"
#include "CharacterAudioData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MAINE_API UCharacterAudioData : public USoundCue
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	UCharacterAudioData();

};
