#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AITicket_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAITicket_Record";
    static constexpr const char* ALIAS = "AITicket_Record";

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AITicket_Record, 0x80);
} // namespace game::data
using AITicket_Record = game::data::AITicket_Record;
} // namespace RED4ext
