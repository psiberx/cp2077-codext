#pragma once

#include "Core/Raw.hpp"
#include "Reverse/Addresses.hpp"
#include "Engine/Resources/ResourcePath.hpp"

#include <RED4ext/Scripting/Natives/Generated/ink/Widget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryItemInstance.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryResource.hpp>

namespace App::Raw
{
using SpawnExternalWidget = Core::RawFunc<
    /* address = */ Reverse::Addresses::InkSpawner_SpawnFromExternal,
    /* signature = */ uintptr_t (*)(
        RED4ext::Handle<RED4ext::ink::WidgetLibraryItemInstance>& aSpawnedItem,
        RED4ext::Handle<RED4ext::ink::Widget>& aParentWidget,
        RED4ext::Handle<RED4ext::ink::WidgetLibraryResource>& aLocalLibrary,
        Engine::ResourcePath aExternalLibraryPath,
        RED4ext::CName aExternalLibraryID)>;
}
