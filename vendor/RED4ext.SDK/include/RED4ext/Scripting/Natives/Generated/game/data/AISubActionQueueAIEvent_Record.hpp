#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionQueueAIEvent_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionQueueAIEvent_Record";
    static constexpr const char* ALIAS = "AISubActionQueueAIEvent_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionQueueAIEvent_Record, 0x50);
} // namespace game::data
using AISubActionQueueAIEvent_Record = game::data::AISubActionQueueAIEvent_Record;
} // namespace RED4ext
