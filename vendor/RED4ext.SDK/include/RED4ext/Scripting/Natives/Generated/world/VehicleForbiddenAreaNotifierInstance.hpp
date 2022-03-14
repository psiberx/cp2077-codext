#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace world { 
struct VehicleForbiddenAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "worldVehicleForbiddenAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0xC0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(VehicleForbiddenAreaNotifierInstance, 0xC0);
} // namespace world
} // namespace RED4ext
