// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FDiceRoll.h"
#include "DiceRollerFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DICEROLLER_API UDiceRollerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="Dice")
	static int32 RollDice(FDiceRoll DiceRoll);
};
