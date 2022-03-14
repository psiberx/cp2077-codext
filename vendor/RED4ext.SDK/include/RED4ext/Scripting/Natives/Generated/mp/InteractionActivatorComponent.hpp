#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace mp { 
struct InteractionActivatorComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "mpInteractionActivatorComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x140 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(InteractionActivatorComponent, 0x140);
} // namespace mp
} // namespace RED4ext
