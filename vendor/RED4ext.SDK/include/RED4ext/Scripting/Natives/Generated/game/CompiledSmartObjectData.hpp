#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game { 
struct CompiledSmartObjectData : ISerializable
{
    static constexpr const char* NAME = "gameCompiledSmartObjectData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x48 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(CompiledSmartObjectData, 0x48);
} // namespace game
} // namespace RED4ext
