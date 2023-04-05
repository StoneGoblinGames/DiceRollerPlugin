#pragma once

#include "CoreMinimal.h"
#include "FDiceRoll.generated.h"

USTRUCT(BlueprintType)
struct FDiceRoll
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfDice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DieSides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ModifierToResult;
};
