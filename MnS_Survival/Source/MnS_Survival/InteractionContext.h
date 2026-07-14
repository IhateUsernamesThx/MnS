#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionContext.generated.h"

USTRUCT(BlueprintType)
struct MNS_SURVIVAL_API FInteractionContext
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
	AActor* Instigator = nullptr;

	UPROPERTY(BlueprintReadWrite)
	AActor* Owner = nullptr;

};