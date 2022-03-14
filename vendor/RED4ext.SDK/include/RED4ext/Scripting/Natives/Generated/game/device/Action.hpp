#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::device { 
struct Action : red::Event
{
    static constexpr const char* NAME = "gamedeviceAction";
    static constexpr const char* ALIAS = "DeviceAction";

    uint8_t unk40[0x58 - 0x40]; // 40
    CName actionName; // 58
    int32_t clearanceLevel; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    CString localizedObjectName; // 68
};
RED4EXT_ASSERT_SIZE(Action, 0x88);
} // namespace game::device
using DeviceAction = game::device::Action;
} // namespace RED4ext
