#pragma once

#include "Core/Runtime/HostImage.hpp"
#include "Core/Runtime/ModuleImage.hpp"

namespace Core::Runtime
{
void Initialize(const Core::HostImage& aHost, const Core::ModuleImage& aModule);

[[nodiscard]] uintptr_t GetImageBase();
[[nodiscard]] std::filesystem::path GetImagePath();
[[nodiscard]] std::filesystem::path GetRootDir();
[[nodiscard]] std::filesystem::path GetModulePath();
[[nodiscard]] std::string GetModuleName();
[[nodiscard]] bool IsASI();
[[nodiscard]] bool IsASI(HMODULE aHandle);
[[nodiscard]] bool IsEXE(std::wstring_view aName);
}
