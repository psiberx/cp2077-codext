#pragma once

#include "Raws.hpp"
#include "Core/Foundation/Feature.hpp"
#include "Core/Hooking/HookingAgent.hpp"

namespace App
{
class InkSpawnExternalPatch
    : public Core::Feature
    , public Core::HookingAgent
{
    void OnBootstrap() override;

    static void OnSpawnExternal(
        RED4ext::Handle<RED4ext::ink::WidgetLibraryItemInstance>& aSpawnedItem,
        RED4ext::Handle<RED4ext::ink::Widget>& aParentWidget,
        RED4ext::Handle<RED4ext::ink::WidgetLibraryResource>& aLocalLibrary,
        Engine::ResourcePath aExternalLibraryPath,
        RED4ext::CName aExternalLibraryID);
};
}
