#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct GuardAreaNodeInstance : world::AreaShapeNodeInstance
{
    static constexpr const char* NAME = "worldGuardAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xE0 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(GuardAreaNodeInstance, 0xE0);
} // namespace world
} // namespace RED4ext
