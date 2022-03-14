#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct OverrideSplineSpeed_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questOverrideSplineSpeed_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    float speed; // 68
    float adjustTime; // 6C
};
RED4EXT_ASSERT_SIZE(OverrideSplineSpeed_NodeType, 0x70);
} // namespace quest
} // namespace RED4ext
