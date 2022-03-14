#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct ItemStructure_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataItemStructure_Record";
    static constexpr const char* ALIAS = "ItemStructure_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemStructure_Record, 0x58);
} // namespace game::data
using ItemStructure_Record = game::data::ItemStructure_Record;
} // namespace RED4ext
