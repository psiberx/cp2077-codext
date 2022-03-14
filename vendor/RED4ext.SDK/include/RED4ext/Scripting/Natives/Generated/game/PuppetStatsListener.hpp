#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatsListener.hpp>

namespace RED4ext
{
namespace game { 
struct PuppetStatsListener : game::IStatsListener
{
    static constexpr const char* NAME = "gamePuppetStatsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PuppetStatsListener, 0x48);
} // namespace game
} // namespace RED4ext
