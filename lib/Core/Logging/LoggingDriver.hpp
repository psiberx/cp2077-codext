#pragma once

#include <string>
#include <string_view>
#include <fmt/format.h>

namespace Core
{
class LoggingDriver
{
public:
    virtual void LogInfo(const std::string& aMessage) = 0;
    virtual void LogWarning(const std::string& aMessage) = 0;
    virtual void LogError(const std::string& aMessage) = 0;
    virtual void LogFlush() = 0;

    template<typename... Args>
    constexpr void LogInfo(std::string_view aFormat, Args&&... aArgs)
    {
        LogInfo(fmt::vformat(aFormat, fmt::make_format_args(std::forward<Args>(aArgs)...)));
    }

    template<typename... Args>
    constexpr void LogWarning(std::string_view aFormat, Args&&... aArgs)
    {
        LogWarning(fmt::vformat(aFormat, fmt::make_format_args(std::forward<Args>(aArgs)...)));
    }

    template<typename... Args>
    constexpr void LogError(std::string_view aFormat, Args&&... aArgs)
    {
        LogError(fmt::vformat(aFormat, fmt::make_format_args(std::forward<Args>(aArgs)...)));
    }

    static void SetDefault(LoggingDriver& aDriver);
    static LoggingDriver& GetDefault();
};
}
