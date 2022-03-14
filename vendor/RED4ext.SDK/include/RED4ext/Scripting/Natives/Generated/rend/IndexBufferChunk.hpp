#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApieIndexBufferChunkType.hpp>

namespace RED4ext
{
namespace rend { 
struct IndexBufferChunk
{
    static constexpr const char* NAME = "rendIndexBufferChunk";
    static constexpr const char* ALIAS = NAME;

    GpuWrapApieIndexBufferChunkType pe; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    uint32_t teOffset; // 04
};
RED4EXT_ASSERT_SIZE(IndexBufferChunk, 0x8);
} // namespace rend
} // namespace RED4ext
