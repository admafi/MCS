#pragma once

#include "CoreMinimal.h"
#include "EngineMinimal.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerState.h"
#include "Core.h"
#include "ModuleManager.h"
#include "MCSUtilityFunctions.generated.h"

UCLASS()
class MCS_API UMCSUtilityFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UMCSUtilityFunctions(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintPure, Category = "MCS Utility Library", meta = (DisplayName = "IsInEditor"))
		static bool IsInEditor()
	{
		#if WITH_EDITOR
			return true;
		#else
			return false;
		#endif
	}
};
