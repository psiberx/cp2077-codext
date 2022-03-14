#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct MappinVariant_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMappinVariant_Record";
    static constexpr const char* ALIAS = "MappinVariant_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MappinVariant_Record, 0x58);
} // namespace game::data
using MappinVariant_Record = game::data::MappinVariant_Record;
} // namespace RED4ext
