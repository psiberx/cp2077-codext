#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct Stat_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStat_Record";
    static constexpr const char* ALIAS = "Stat_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Stat_Record, 0x70);
} // namespace game::data
using Stat_Record = game::data::Stat_Record;
} // namespace RED4ext
