#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest { 
struct DropItemFromSlot_NodeTypeParams
{
    static constexpr const char* NAME = "questDropItemFromSlot_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 00
    TweakDBID slotId; // 38
    bool useGravity; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(DropItemFromSlot_NodeTypeParams, 0x48);
} // namespace quest
} // namespace RED4ext
