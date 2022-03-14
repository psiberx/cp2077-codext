#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace effect { 
struct Spawner : ISerializable
{
    static constexpr const char* NAME = "effectSpawner";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Spawner, 0x30);
} // namespace effect
} // namespace RED4ext
