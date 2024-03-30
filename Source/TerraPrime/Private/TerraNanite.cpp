#include "TerraNanite.h"
#include "Engine/Engine.h"

void UTerraNanite::SetNaniteTessellationEnabled(bool bEnabled)
{
    if (GEngine)
    {
        GEngine->Exec(nullptr, *FString::Printf(TEXT("r.Nanite.Tessellation %d"), bEnabled ? 1 : 0));
    }
}

bool UTerraNanite::IsNaniteTessellationEnabled()
{
    IConsoleVariable* CVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Nanite.Tessellation"));
    return CVar && CVar->GetInt() != 0;
}

void UTerraNanite::ToggleNaniteTessellation()
{
    SetNaniteTessellationEnabled(!IsNaniteTessellationEnabled());
}
