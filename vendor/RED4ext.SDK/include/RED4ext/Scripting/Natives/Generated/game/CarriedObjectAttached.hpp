#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct CarriedObjectAttached : red::Event
{
    static constexpr const char* NAME = "gameCarriedObjectAttached";
    static constexpr const char* ALIAS = "CarriedObjectAttached";

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CarriedObjectAttached, 0x70);
} // namespace game
using CarriedObjectAttached = game::CarriedObjectAttached;
} // namespace RED4ext
