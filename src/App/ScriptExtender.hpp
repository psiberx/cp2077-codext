#pragma once

#include "Core/Foundation/Feature.hpp"

namespace App
{
class ScriptExtender : public Core::Feature
{
protected:
    void OnRegister() override;
    void OnBootstrap() override;
};
}
