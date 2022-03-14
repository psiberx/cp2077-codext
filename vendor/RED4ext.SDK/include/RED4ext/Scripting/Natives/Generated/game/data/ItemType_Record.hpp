#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct ItemType_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataItemType_Record";
    static constexpr const char* ALIAS = "ItemType_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemType_Record, 0x58);
} // namespace game::data
using ItemType_Record = game::data::ItemType_Record;
} // namespace RED4ext
