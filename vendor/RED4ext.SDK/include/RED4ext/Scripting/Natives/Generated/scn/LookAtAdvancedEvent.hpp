#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/LookAtAdvancedEventData.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn { 
struct LookAtAdvancedEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnLookAtAdvancedEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
    scn::LookAtAdvancedEventData advancedData; // 60
};
RED4EXT_ASSERT_SIZE(LookAtAdvancedEvent, 0xC0);
} // namespace scn
} // namespace RED4ext
