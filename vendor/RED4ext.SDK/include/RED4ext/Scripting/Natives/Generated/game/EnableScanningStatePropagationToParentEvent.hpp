#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct EnableScanningStatePropagationToParentEvent : red::Event
{
    static constexpr const char* NAME = "gameEnableScanningStatePropagationToParentEvent";
    static constexpr const char* ALIAS = NAME;

    bool isEnabled; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(EnableScanningStatePropagationToParentEvent, 0x48);
} // namespace game
} // namespace RED4ext
