#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIActionCondition_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIActionCondition_Record";
    static constexpr const char* ALIAS = "AIActionCondition_Record";

    uint8_t unk48[0xE8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIActionCondition_Record, 0xE8);
} // namespace game::data
using AIActionCondition_Record = game::data::AIActionCondition_Record;
} // namespace RED4ext
