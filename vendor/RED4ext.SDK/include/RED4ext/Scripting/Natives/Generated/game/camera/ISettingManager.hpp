#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game::camera { 
struct ISettingManager : game::IGameSystem
{
    static constexpr const char* NAME = "gamecameraISettingManager";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ISettingManager, 0x48);
} // namespace game::camera
} // namespace RED4ext
