#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct VendorProgressionBasedStock_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVendorProgressionBasedStock_Record";
    static constexpr const char* ALIAS = "VendorProgressionBasedStock_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VendorProgressionBasedStock_Record, 0x50);
} // namespace game::data
using VendorProgressionBasedStock_Record = game::data::VendorProgressionBasedStock_Record;
} // namespace RED4ext
