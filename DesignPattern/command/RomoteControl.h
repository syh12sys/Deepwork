#pragma once

#include <memory>

class Command;

class RomoteControl
{
public:
    RomoteControl() = default;
    ~RomoteControl() = default;

    void SetCommand(std::shared_ptr<Command> command);

    // 遥控器按钮按下就调起命令
    void ButtonPressed();

private:
    std::shared_ptr<Command> m_command;
};