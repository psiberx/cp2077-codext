#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IMotionExtraction.hpp>

namespace RED4ext
{
namespace anim { 
struct UncompressedMotionExtraction : anim::IMotionExtraction
{
    static constexpr const char* NAME = "animUncompressedMotionExtraction";
    static constexpr const char* ALIAS = NAME;

    float duration; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<Vector4> frames; // 38
};
RED4EXT_ASSERT_SIZE(UncompressedMotionExtraction, 0x48);
} // namespace anim
} // namespace RED4ext
