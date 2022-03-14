#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct Rule_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataRule_Record";
    static constexpr const char* ALIAS = "Rule_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Rule_Record, 0x58);
} // namespace game::data
using Rule_Record = game::data::Rule_Record;
} // namespace RED4ext
