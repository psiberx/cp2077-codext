#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace quest { struct SpawnManagerNodeType; }

namespace quest { 
struct SpawnManagerNodeActionEntry
{
    static constexpr const char* NAME = "questSpawnManagerNodeActionEntry";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::SpawnManagerNodeType> type; // 00
};
RED4EXT_ASSERT_SIZE(SpawnManagerNodeActionEntry, 0x10);
} // namespace quest
} // namespace RED4ext
