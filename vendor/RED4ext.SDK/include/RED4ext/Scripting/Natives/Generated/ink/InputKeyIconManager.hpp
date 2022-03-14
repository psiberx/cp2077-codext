#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink { 
struct InputKeyIconManager : ISerializable
{
    static constexpr const char* NAME = "inkInputKeyIconManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x1E8 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(InputKeyIconManager, 0x1E8);
} // namespace ink
} // namespace RED4ext
