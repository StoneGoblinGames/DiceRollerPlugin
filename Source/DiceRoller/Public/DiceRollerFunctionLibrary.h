

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FDiceRoll.h"
#include "DiceRollerFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UDiceRollerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category="Dice")
	static int32 RollDice(FDiceRoll DiceRoll);
};
