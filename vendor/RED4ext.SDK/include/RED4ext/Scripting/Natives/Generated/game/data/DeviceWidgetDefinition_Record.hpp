#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/WidgetDefinition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct DeviceWidgetDefinition_Record : game::data::WidgetDefinition_Record
{
    static constexpr const char* NAME = "gamedataDeviceWidgetDefinition_Record";
    static constexpr const char* ALIAS = "DeviceWidgetDefinition_Record";

};
RED4EXT_ASSERT_SIZE(DeviceWidgetDefinition_Record, 0x58);
} // namespace game::data
using DeviceWidgetDefinition_Record = game::data::DeviceWidgetDefinition_Record;
} // namespace RED4ext
