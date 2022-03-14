#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct ITexture;

struct CMaterialParameterCube : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterCube";
    static constexpr const char* ALIAS = NAME;

    Ref<ITexture> texture; // 40
};
RED4EXT_ASSERT_SIZE(CMaterialParameterCube, 0x58);
} // namespace RED4ext
