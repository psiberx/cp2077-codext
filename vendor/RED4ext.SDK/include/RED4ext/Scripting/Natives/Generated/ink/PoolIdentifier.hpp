#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink { 
struct PoolIdentifier : ink::UserData
{
    static constexpr const char* NAME = "inkPoolIdentifier";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PoolIdentifier, 0x48);
} // namespace ink
} // namespace RED4ext
