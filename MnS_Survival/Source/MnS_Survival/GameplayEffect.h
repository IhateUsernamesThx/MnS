#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractionContext.h"
#include "GameplayEffect.generated.h"

UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class MNS_SURVIVAL_API UGameplayEffect : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Execute(FInteractionContext Context);

};