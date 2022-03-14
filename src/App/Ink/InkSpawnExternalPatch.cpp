#include "InkSpawnExternalPatch.hpp"
#include "Engine/Resources/ResourceReference.hpp"

void App::InkSpawnExternalPatch::OnBootstrap()
{
    HookBefore<Raw::SpawnExternalWidget>(&OnSpawnExternal);
}

void App::InkSpawnExternalPatch::OnSpawnExternal(
    RED4ext::Handle<RED4ext::ink::WidgetLibraryItemInstance>& aSpawnedItem,
    RED4ext::Handle<RED4ext::ink::Widget>& aParentWidget,
    RED4ext::Handle<RED4ext::ink::WidgetLibraryResource>& aLocalLibrary,
    Engine::ResourcePath aExternalLibraryPath,
    RED4ext::CName)
{
    using ResRefArray = RED4ext::DynArray<Engine::ResourceReference>;

    // Temporary type fix until new resource types are moved to SDK...
    auto externalLibraries = reinterpret_cast<ResRefArray*>(&aLocalLibrary->externalLibraries);

    // Check if the requested external library is in the list and abort if it is.
    for (const auto& externalLibrary : *externalLibraries)
        if (externalLibrary.path == aExternalLibraryPath)
            return;

    // Add the requested external library to the list.
    externalLibraries->EmplaceBack(aExternalLibraryPath);

    // Load the library so it'll be available when spawner needs it.
    auto* externalLibrary = externalLibraries->End() - 1;
    externalLibrary->Load();
}
