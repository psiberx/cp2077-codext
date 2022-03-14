#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct IMovingPlatformMovement; }

namespace game { 
struct MovingPlatformMoveTo : red::Event
{
    static constexpr const char* NAME = "gameMovingPlatformMoveTo";
    static constexpr const char* ALIAS = "MoveTo";

    Handle<game::IMovingPlatformMovement> movement; // 40
    CName destinationName; // 50
    int32_t data; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(MovingPlatformMoveTo, 0x60);
} // namespace game
using MoveTo = game::MovingPlatformMoveTo;
} // namespace RED4ext
