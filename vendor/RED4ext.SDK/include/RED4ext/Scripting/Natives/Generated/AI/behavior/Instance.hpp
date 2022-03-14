#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct Instance
{
    static constexpr const char* NAME = "AIbehaviorInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xE8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(Instance, 0xE8);
} // namespace AI::behavior
} // namespace RED4ext
