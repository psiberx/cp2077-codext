#pragma once

#include <RED4ext/Api/v0/SemVer.hpp>
#include <RED4ext/Api/v0/FileVer.hpp>

namespace RED4ext::v0
{
struct PluginInfo
{
    /**
     * @brief The name of the plugin.
     */
    const wchar_t* name;

    /**
     * @brief The author(s) of the plugin.
     */
    const wchar_t* author;

    /**
     * @brief The version of the plugin.
     */
    SemVer version;

    /**
     * @brief The supported game's version of the plugin.
     * @note If you are using RED4ext only as a loader, use 'RED4EXT_V0_RUNTIME_INDEPENDENT'.
     */
    FileVer runtime;

    /**
     * @brief The SDK version.
     */
    SemVer sdk;
};
} // namespace RED4ext::v0
