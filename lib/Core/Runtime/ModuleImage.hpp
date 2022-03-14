#pragma once

#include "Core/Win.hpp"

#include <filesystem>

namespace Core
{
class ModuleImage
{
public:
    explicit ModuleImage(HMODULE aHandle);
    ~ModuleImage() = default;

    [[nodiscard]] std::filesystem::path GetPath() const;
    [[nodiscard]] std::string GetName() const;
    [[nodiscard]] bool IsASI() const;

private:
    std::filesystem::path m_path;
};
}
