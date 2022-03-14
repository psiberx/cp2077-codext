#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
struct EnteredPathWithDoors : red::Event
{
    static constexpr const char* NAME = "EnteredPathWithDoors";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EnteredPathWithDoors, 0x40);
} // namespace RED4ext
