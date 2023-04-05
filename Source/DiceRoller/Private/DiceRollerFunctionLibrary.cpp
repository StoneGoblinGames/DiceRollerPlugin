#include "DiceRollerFunctionLibrary.h"

int32 UDiceRollerFunctionLibrary::RollDice(FDiceRoll DiceRoll)
{
	int32 result = 0;
	for (int32 i = 0; i<DiceRoll.NumberOfDice; i++)
	{
		result += FMath::RandRange(1, DiceRoll.DieSides);
	}

	return result + DiceRoll.ModifierToResult;
}
