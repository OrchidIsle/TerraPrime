#include "TerraNanite.h"
#include "Engine/Engine.h"

FOnNaniteTessellationChanged UTerraNanite::OnNaniteTessellationChanged;

void UTerraNanite::SetNaniteTessellationEnabled(bool bEnabled)
{
    bool bCurrentlyEnabled = IsNaniteTessellationEnabled();
    if (bCurrentlyEnabled != bEnabled)
    {
        if (GEngine)
        {
            GEngine->Exec(nullptr, *FString::Printf(TEXT("r.Nanite.Tessellation %d"), bEnabled ? 1 : 0));
        }

        // Broadcast the change
        OnNaniteTessellationChanged.Broadcast(bEnabled);
    }
}

bool UTerraNanite::IsNaniteTessellationEnabled()
{
    IConsoleVariable* CVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Nanite.Tessellation"));
    bool bEnabled = CVar && CVar->GetInt() != 0;

    return bEnabled;
}

void UTerraNanite::ToggleNaniteTessellation()
{
    SetNaniteTessellationEnabled(!IsNaniteTessellationEnabled());
}
