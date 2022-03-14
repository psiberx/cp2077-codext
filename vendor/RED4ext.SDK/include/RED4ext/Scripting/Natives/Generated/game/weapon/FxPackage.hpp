#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/weapon/IFxPackage.hpp>

namespace RED4ext
{
namespace game::weapon { 
struct FxPackage : game::weapon::IFxPackage
{
    static constexpr const char* NAME = "gameweaponFxPackage";
    static constexpr const char* ALIAS = "FxPackage";

    uint8_t unk40[0x3120 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(FxPackage, 0x3120);
} // namespace game::weapon
using FxPackage = game::weapon::FxPackage;
} // namespace RED4ext
