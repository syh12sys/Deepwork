#pragma once
#include "Command.h"
#include "Light.h"

class LightCommand : public Command
{
public:
    LightCommand() = default;
    ~LightCommand() = default;

public:
    void Excute() override;

private:
    Light m_light;
};