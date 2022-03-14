#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/dbg/CallstackBlock.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/dbg/CallstackPhase.hpp>

namespace RED4ext
{
namespace quest::dbg { 
struct CallstackData
{
    static constexpr const char* NAME = "questdbgCallstackData";
    static constexpr const char* ALIAS = NAME;

    uint64_t resourceHash; // 00
    DynArray<quest::dbg::CallstackBlock> blocks; // 08
    DynArray<quest::dbg::CallstackPhase> phases; // 18
    DynArray<uint64_t> executed; // 28
    DynArray<uint64_t> failed; // 38
    uint32_t callstackRevision; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(CallstackData, 0x50);
} // namespace quest::dbg
} // namespace RED4ext
