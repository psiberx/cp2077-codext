#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/alization/PersistenceOnScreenEntry.hpp>

namespace RED4ext
{
namespace loc::alization { 
struct PersistenceOnScreenEntries : ISerializable
{
    static constexpr const char* NAME = "localizationPersistenceOnScreenEntries";
    static constexpr const char* ALIAS = NAME;

    DynArray<loc::alization::PersistenceOnScreenEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(PersistenceOnScreenEntries, 0x40);
} // namespace loc::alization
} // namespace RED4ext
