#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
struct FinishedPathWithDoors : red::Event
{
    static constexpr const char* NAME = "FinishedPathWithDoors";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(FinishedPathWithDoors, 0x40);
} // namespace RED4ext
