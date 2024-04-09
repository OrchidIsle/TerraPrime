#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PluginInfo.generated.h"

/**
 * PluginInfo class to manage plugin information such as version.
 */
UCLASS(Blueprintable)
class TERRAPRIME_API UPluginInfo : public UObject
{
    GENERATED_BODY()

public:
    // Constructor
    UPluginInfo();

    // Function to get the version of the plugin
    UFUNCTION(BlueprintCallable, Category = "TerraPrime")
    static FString GetVersion();
};
