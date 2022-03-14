#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IVisionModeSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIVisionModeSystem";
    static constexpr const char* ALIAS = "IVisionModeSystem";

};
RED4EXT_ASSERT_SIZE(IVisionModeSystem, 0x48);
} // namespace game
using IVisionModeSystem = game::IVisionModeSystem;
} // namespace RED4ext
