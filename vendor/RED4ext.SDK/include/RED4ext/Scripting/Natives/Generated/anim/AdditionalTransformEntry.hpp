#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformInfo.hpp>

namespace RED4ext
{
namespace anim { 
struct AdditionalTransformEntry : ISerializable
{
    static constexpr const char* NAME = "animAdditionalTransformEntry";
    static constexpr const char* ALIAS = NAME;

    anim::TransformInfo transformInfo; // 30
    QsTransform value; // 70
};
RED4EXT_ASSERT_SIZE(AdditionalTransformEntry, 0xA0);
} // namespace anim
} // namespace RED4ext
