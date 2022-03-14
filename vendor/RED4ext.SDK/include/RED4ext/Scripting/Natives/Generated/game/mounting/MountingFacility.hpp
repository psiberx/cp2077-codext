#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/IMountingFacility.hpp>

namespace RED4ext
{
namespace game::mounting { 
struct MountingFacility : game::mounting::IMountingFacility
{
    static constexpr const char* NAME = "gamemountingMountingFacility";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x980 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MountingFacility, 0x980);
} // namespace game::mounting
} // namespace RED4ext
