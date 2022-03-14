#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct IBackendData : ISerializable
{
    static constexpr const char* NAME = "IBackendData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IBackendData, 0x30);
} // namespace RED4ext
