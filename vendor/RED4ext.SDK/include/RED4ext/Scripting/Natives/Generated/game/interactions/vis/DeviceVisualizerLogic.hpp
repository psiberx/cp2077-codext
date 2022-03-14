#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/IGroupedVisualizerLogic.hpp>

namespace RED4ext
{
namespace game::interactions::vis { 
struct DeviceVisualizerLogic : game::interactions::vis::IGroupedVisualizerLogic
{
    static constexpr const char* NAME = "gameinteractionsvisDeviceVisualizerLogic";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x80 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(DeviceVisualizerLogic, 0x80);
} // namespace game::interactions::vis
} // namespace RED4ext
