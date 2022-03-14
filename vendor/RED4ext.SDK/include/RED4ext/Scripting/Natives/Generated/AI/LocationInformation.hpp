#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace AI { 
struct LocationInformation
{
    static constexpr const char* NAME = "AILocationInformation";
    static constexpr const char* ALIAS = "LocationInformation";

    Vector4 position; // 00
    Vector4 direction; // 10
};
RED4EXT_ASSERT_SIZE(LocationInformation, 0x20);
} // namespace AI
using LocationInformation = AI::LocationInformation;
} // namespace RED4ext
