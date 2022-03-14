#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandNodeBase.hpp>

namespace RED4ext
{
namespace quest { struct UseWorkspotParamsV1; }

namespace quest { 
struct UseWorkspotNodeDefinition : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questUseWorkspotNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 48
    Handle<quest::UseWorkspotParamsV1> paramsV1; // 80
};
RED4EXT_ASSERT_SIZE(UseWorkspotNodeDefinition, 0x90);
} // namespace quest
} // namespace RED4ext
