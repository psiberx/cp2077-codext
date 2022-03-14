#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace sense { struct SensorObject; }
namespace sense { struct VisibleObject; }

namespace sense { 
struct Component : ent::IPlacedComponent
{
    static constexpr const char* NAME = "senseComponent";
    static constexpr const char* ALIAS = "SenseComponent";

    Handle<sense::SensorObject> sensorObject; // 120
    Handle<sense::VisibleObject> visibleObject; // 130
    bool enableBeingDetectable; // 140
    uint8_t unk141[0x1A0 - 0x141]; // 141
};
RED4EXT_ASSERT_SIZE(Component, 0x1A0);
} // namespace sense
using SenseComponent = sense::Component;
} // namespace RED4ext
