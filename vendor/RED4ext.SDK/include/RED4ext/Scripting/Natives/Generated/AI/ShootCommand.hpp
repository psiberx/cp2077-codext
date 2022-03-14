#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CombatRelatedCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace AI { 
struct ShootCommand : AI::CombatRelatedCommand
{
    static constexpr const char* NAME = "AIShootCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef targetOverrideNodeRef; // 68
    game::EntityReference targetOverridePuppetRef; // 70
    float duration; // A8
    bool once; // AC
    uint8_t unkAD[0xB0 - 0xAD]; // AD
};
RED4EXT_ASSERT_SIZE(ShootCommand, 0xB0);
} // namespace AI
} // namespace RED4ext
