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
struct PersistenceSubtitleMapEntry
{
    static constexpr const char* NAME = "localizationPersistenceSubtitleMapEntry";
    static constexpr const char* ALIAS = NAME;

    CName subtitleGroup; // 00
    RaRef<JsonResource> subtitleFile; // 08
};
RED4EXT_ASSERT_SIZE(PersistenceSubtitleMapEntry, 0x10);
} // namespace loc::alization
} // namespace RED4ext
