#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct JsonResource;

namespace loc::alization { 
struct PersistenceLocDataMapEntry
{
    static constexpr const char* NAME = "localizationPersistenceLocDataMapEntry";
    static constexpr const char* ALIAS = NAME;

    CName langCode; // 00
    RaRef<JsonResource> onscreensPath; // 08
    RaRef<JsonResource> subtitlePath; // 10
};
RED4EXT_ASSERT_SIZE(PersistenceLocDataMapEntry, 0x18);
} // namespace loc::alization
} // namespace RED4ext
