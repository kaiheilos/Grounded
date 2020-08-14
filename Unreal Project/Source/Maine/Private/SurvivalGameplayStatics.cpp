// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalGameplayStatics.h"

ASurvivalPlayerCharacter* USurvivalGameplayStatics::GetLocalSurvivalPlayerCharacter()
{
	ASurvivalPlayerCharacter* Pawn = NewObject<ASurvivalPlayerCharacter>(ASurvivalPlayerCharacter::StaticClass());
	return Pawn;
}