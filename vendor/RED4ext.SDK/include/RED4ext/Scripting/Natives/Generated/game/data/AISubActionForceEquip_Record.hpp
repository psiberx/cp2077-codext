#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionForceEquip_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionForceEquip_Record";
    static constexpr const char* ALIAS = "AISubActionForceEquip_Record";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionForceEquip_Record, 0x68);
} // namespace game::data
using AISubActionForceEquip_Record = game::data::AISubActionForceEquip_Record;
} // namespace RED4ext
