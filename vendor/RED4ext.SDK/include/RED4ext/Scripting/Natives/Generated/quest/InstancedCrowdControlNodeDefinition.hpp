#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct InstancedCrowdControlNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questInstancedCrowdControlNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    CName crowdVariantTag; // 48
    bool enable; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(InstancedCrowdControlNodeDefinition, 0x58);
} // namespace quest
} // namespace RED4ext
