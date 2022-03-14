#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ItemCreationPrereq_Record : game::data::StatPrereq_Record
{
    static constexpr const char* NAME = "gamedataItemCreationPrereq_Record";
    static constexpr const char* ALIAS = "ItemCreationPrereq_Record";

};
RED4EXT_ASSERT_SIZE(ItemCreationPrereq_Record, 0x60);
} // namespace game::data
using ItemCreationPrereq_Record = game::data::ItemCreationPrereq_Record;
} // namespace RED4ext
