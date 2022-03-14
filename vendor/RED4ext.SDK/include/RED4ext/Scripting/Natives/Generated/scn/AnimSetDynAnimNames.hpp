#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn { 
struct AnimSetDynAnimNames
{
    static constexpr const char* NAME = "scnAnimSetDynAnimNames";
    static constexpr const char* ALIAS = NAME;

    alignas(8) StaticArray<CName, 1> animVariable; // 00
    DynArray<CName> animNames; // 10
};
RED4EXT_ASSERT_SIZE(AnimSetDynAnimNames, 0x20);
} // namespace scn
} // namespace RED4ext
