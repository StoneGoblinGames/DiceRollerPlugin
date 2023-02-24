#pragma once

#include "CoreMinimal.h"
#include "FDiceRoll.generated.h"

USTRUCT(BlueprintType)
struct FDiceRoll
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfDices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DiceSides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ModifierToResult;
};
