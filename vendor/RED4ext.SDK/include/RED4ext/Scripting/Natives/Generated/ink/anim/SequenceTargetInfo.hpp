#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct SequenceTargetInfo : ISerializable
{
    static constexpr const char* NAME = "inkanimSequenceTargetInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint32_t> path; // 30
};
RED4EXT_ASSERT_SIZE(SequenceTargetInfo, 0x40);
} // namespace ink::anim
} // namespace RED4ext
