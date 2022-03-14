#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionFailIfFriendlyFire_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionFailIfFriendlyFire_Record";
    static constexpr const char* ALIAS = "AISubActionFailIfFriendlyFire_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionFailIfFriendlyFire_Record, 0x50);
} // namespace game::data
using AISubActionFailIfFriendlyFire_Record = game::data::AISubActionFailIfFriendlyFire_Record;
} // namespace RED4ext
