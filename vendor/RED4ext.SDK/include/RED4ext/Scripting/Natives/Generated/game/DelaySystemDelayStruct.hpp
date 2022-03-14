#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game { 
struct DelaySystemDelayStruct : ISerializable
{
    static constexpr const char* NAME = "gameDelaySystemDelayStruct";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(DelaySystemDelayStruct, 0x40);
} // namespace game
} // namespace RED4ext
