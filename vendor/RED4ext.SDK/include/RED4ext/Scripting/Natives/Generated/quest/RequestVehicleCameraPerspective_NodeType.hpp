#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VehicleCameraPerspective.hpp>

namespace RED4ext
{
namespace quest { 
struct RequestVehicleCameraPerspective_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questRequestVehicleCameraPerspective_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::VehicleCameraPerspective cameraPerspective; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(RequestVehicleCameraPerspective_NodeType, 0x38);
} // namespace quest
} // namespace RED4ext
