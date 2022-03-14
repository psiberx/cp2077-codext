#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CommunitySpawnSetNameToIDEntry.hpp>

namespace RED4ext
{
namespace game { 
struct CommunitySpawnSetNameToID
{
    static constexpr const char* NAME = "gameCommunitySpawnSetNameToID";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::CommunitySpawnSetNameToIDEntry> entries; // 00
};
RED4EXT_ASSERT_SIZE(CommunitySpawnSetNameToID, 0x10);
} // namespace game
} // namespace RED4ext
