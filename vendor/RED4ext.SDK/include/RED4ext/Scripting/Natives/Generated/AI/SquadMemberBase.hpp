#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI { 
struct SquadMemberBase : ISerializable
{
    static constexpr const char* NAME = "AISquadMemberBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x68 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(SquadMemberBase, 0x68);
} // namespace AI
} // namespace RED4ext
