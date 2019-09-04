#include "stdafx.h"
#include "RomoteControl.h"
#include "Command.h"

void RomoteControl::SetCommand(std::shared_ptr<Command> command)
{
    m_command = command;
}

void RomoteControl::ButtonPressed()
{
    if (m_command)
    {
        m_command->Excute();
    }
}