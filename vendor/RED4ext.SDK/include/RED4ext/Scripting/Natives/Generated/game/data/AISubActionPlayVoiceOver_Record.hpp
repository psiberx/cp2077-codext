#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionPlayVoiceOver_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionPlayVoiceOver_Record";
    static constexpr const char* ALIAS = "AISubActionPlayVoiceOver_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionPlayVoiceOver_Record, 0x60);
} // namespace game::data
using AISubActionPlayVoiceOver_Record = game::data::AISubActionPlayVoiceOver_Record;
} // namespace RED4ext
