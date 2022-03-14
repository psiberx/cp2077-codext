#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionDisableCollider_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionDisableCollider_Record";
    static constexpr const char* ALIAS = "AISubActionDisableCollider_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionDisableCollider_Record, 0x58);
} // namespace game::data
using AISubActionDisableCollider_Record = game::data::AISubActionDisableCollider_Record;
} // namespace RED4ext
