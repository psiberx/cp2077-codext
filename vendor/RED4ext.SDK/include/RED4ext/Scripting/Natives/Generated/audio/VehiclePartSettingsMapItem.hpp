#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio { 
struct VehiclePartSettingsMapItem
{
    static constexpr const char* NAME = "audioVehiclePartSettingsMapItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName onDetachEvent; // 08
    float onDetachAcousticsIsolationFactorReduction; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(VehiclePartSettingsMapItem, 0x18);
} // namespace audio
} // namespace RED4ext
