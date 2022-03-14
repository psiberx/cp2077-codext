#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPlayerManager.hpp>

namespace RED4ext
{
namespace game { 
struct PlayerManager : game::IPlayerManager
{
    static constexpr const char* NAME = "gamePlayerManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xE0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PlayerManager, 0xE0);
} // namespace game
} // namespace RED4ext
