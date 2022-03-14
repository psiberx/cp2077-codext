#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn { 
struct PerformerId
{
    static constexpr const char* NAME = "scnPerformerId";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(PerformerId, 0x4);
} // namespace scn
} // namespace RED4ext
