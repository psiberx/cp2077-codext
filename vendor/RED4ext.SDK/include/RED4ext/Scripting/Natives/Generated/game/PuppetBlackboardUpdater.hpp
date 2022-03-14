#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct PuppetBlackboardUpdater : IScriptable
{
    static constexpr const char* NAME = "gamePuppetBlackboardUpdater";
    static constexpr const char* ALIAS = "PuppetBlackboardUpdater";

    uint8_t unk40[0x1F8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PuppetBlackboardUpdater, 0x1F8);
} // namespace game
using PuppetBlackboardUpdater = game::PuppetBlackboardUpdater;
} // namespace RED4ext
