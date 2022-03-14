#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ObjectAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ItemAction_Record : game::data::ObjectAction_Record
{
    static constexpr const char* NAME = "gamedataItemAction_Record";
    static constexpr const char* ALIAS = "ItemAction_Record";

    uint8_t unk80[0x88 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(ItemAction_Record, 0x88);
} // namespace game::data
using ItemAction_Record = game::data::ItemAction_Record;
} // namespace RED4ext
