// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceRollerFunctionLibrary.h"

int32 UDiceRollerFunctionLibrary::RollDice(FDiceRoll DiceRoll)
{
	int32 result = 0;
	for (int32 i = 0; i<DiceRoll.NumberOfDices; i++)
	{
		result += FMath::RandRange(1, DiceRoll.DiceSides);
	}

	return result + DiceRoll.ModifierToResult;
}
