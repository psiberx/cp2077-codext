#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace interop { 
struct GraphConnectionCreationData
{
    static constexpr const char* NAME = "interopGraphConnectionCreationData";
    static constexpr const char* ALIAS = NAME;

    CString data; // 00
    DynArray<CString> extraData; // 20
};
RED4EXT_ASSERT_SIZE(GraphConnectionCreationData, 0x30);
} // namespace interop
} // namespace RED4ext
