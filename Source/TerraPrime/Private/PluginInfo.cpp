#include "PluginInfo.h"
#include "Misc/ConfigCacheIni.h" 

UPluginInfo::UPluginInfo()
{
    // Constructor logic here (if necessary)
}

FString UPluginInfo::GetVersion()
{
    FString Version;
    if (GConfig->GetString(TEXT("PluginInfo"), TEXT("Version"), Version, FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("TerraPrime/Config/Version.ini"))))
    {
        return Version;
    }

    return TEXT("Version Not Found");
}