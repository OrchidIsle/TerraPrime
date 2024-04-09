#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TerraNanite.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNaniteTessellationChanged, bool, bEnabled);

UCLASS()
class TERRAPRIME_API UTerraNanite : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    // Blueprint callable function to enable or disable Nanite tessellation
    UFUNCTION(BlueprintCallable, Category = "TerraPrime")
    static void SetNaniteTessellationEnabled(bool bEnabled);

    // Blueprint callable function to get the current status of Nanite tessellation
    UFUNCTION(BlueprintCallable, Category = "TerraPrime", BlueprintPure)
    static bool IsNaniteTessellationEnabled();

    // Helper function to toggle the current state
    UFUNCTION(BlueprintCallable, Category = "TerraPrime")
    static void ToggleNaniteTessellation();

    // Delegate for broadcasting when tessellation state changes
    static FOnNaniteTessellationChanged OnNaniteTessellationChanged;
};
