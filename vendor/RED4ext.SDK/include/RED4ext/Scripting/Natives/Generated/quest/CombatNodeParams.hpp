#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest { 
struct CombatNodeParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questCombatNodeParams";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CombatNodeParams, 0x40);
} // namespace quest
} // namespace RED4ext
