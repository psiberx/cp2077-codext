#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct Proficiency_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataProficiency_Record";
    static constexpr const char* ALIAS = "Proficiency_Record";

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Proficiency_Record, 0x80);
} // namespace game::data
using Proficiency_Record = game::data::Proficiency_Record;
} // namespace RED4ext
