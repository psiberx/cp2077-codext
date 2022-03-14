#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionApplyTimeDilation_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionApplyTimeDilation_Record";
    static constexpr const char* ALIAS = "AISubActionApplyTimeDilation_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionApplyTimeDilation_Record, 0x58);
} // namespace game::data
using AISubActionApplyTimeDilation_Record = game::data::AISubActionApplyTimeDilation_Record;
} // namespace RED4ext
