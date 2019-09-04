#pragma once

#include <memory>

class Command;

class RomoteControl
{
public:
    RomoteControl() = default;
    ~RomoteControl() = default;

    void SetCommand(std::shared_ptr<Command> command);

    // ң������ť���¾͵�������
    void ButtonPressed();

private:
    std::shared_ptr<Command> m_command;
};