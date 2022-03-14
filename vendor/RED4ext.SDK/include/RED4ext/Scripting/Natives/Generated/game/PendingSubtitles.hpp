#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DialogLineData.hpp>

namespace RED4ext
{
namespace game { 
struct PendingSubtitles
{
    static constexpr const char* NAME = "gamePendingSubtitles";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::DialogLineData> pendingSubtitles; // 00
};
RED4EXT_ASSERT_SIZE(PendingSubtitles, 0x10);
} // namespace game
} // namespace RED4ext
