#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GrenadeDeliveryMethod_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct RegularGDM_Record : game::data::GrenadeDeliveryMethod_Record
{
    static constexpr const char* NAME = "gamedataRegularGDM_Record";
    static constexpr const char* ALIAS = "RegularGDM_Record";

};
RED4EXT_ASSERT_SIZE(RegularGDM_Record, 0x60);
} // namespace game::data
using RegularGDM_Record = game::data::RegularGDM_Record;
} // namespace RED4ext
