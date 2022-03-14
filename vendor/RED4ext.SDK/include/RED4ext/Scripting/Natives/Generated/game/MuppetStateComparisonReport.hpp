#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetComparisonReportItem.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetStateComparisonReport
{
    static constexpr const char* NAME = "gameMuppetStateComparisonReport";
    static constexpr const char* ALIAS = NAME;

    uint32_t frameID; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<game::MuppetComparisonReportItem> items; // 08
};
RED4EXT_ASSERT_SIZE(MuppetStateComparisonReport, 0x18);
} // namespace game
} // namespace RED4ext
