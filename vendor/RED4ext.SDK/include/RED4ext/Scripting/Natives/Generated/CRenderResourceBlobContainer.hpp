#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct IRenderResourceBlob;

struct CRenderResourceBlobContainer : ISerializable
{
    static constexpr const char* NAME = "CRenderResourceBlobContainer";
    static constexpr const char* ALIAS = NAME;

    Handle<IRenderResourceBlob> blob; // 30
};
RED4EXT_ASSERT_SIZE(CRenderResourceBlobContainer, 0x40);
} // namespace RED4ext
