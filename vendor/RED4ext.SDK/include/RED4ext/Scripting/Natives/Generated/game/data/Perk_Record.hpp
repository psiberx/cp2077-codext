#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct Perk_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataPerk_Record";
    static constexpr const char* ALIAS = "Perk_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Perk_Record, 0x70);
} // namespace game::data
using Perk_Record = game::data::Perk_Record;
} // namespace RED4ext
