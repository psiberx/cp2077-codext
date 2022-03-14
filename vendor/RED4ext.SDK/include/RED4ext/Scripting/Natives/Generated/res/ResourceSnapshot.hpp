#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CResource;

namespace res { 
struct ResourceSnapshot : CResource
{
    static constexpr const char* NAME = "resResourceSnapshot";
    static constexpr const char* ALIAS = NAME;

    DynArray<RaRef<CResource>> resources; // 40
};
RED4EXT_ASSERT_SIZE(ResourceSnapshot, 0x50);
} // namespace res
} // namespace RED4ext
