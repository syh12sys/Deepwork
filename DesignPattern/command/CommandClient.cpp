#include "stdafx.h"
#include "CommandClient.h"
#include "RomoteControl.h"
#include "LightCommand.h"

#include <memory>
#include <iostream>


void CommandClient::Test()
{   
    std::cout << "开始创建命令，并保存到命令传递者中" << std::endl;
    std::shared_ptr<Command> command(new LightCommand);
    RomoteControl remoteControl;
    remoteControl.SetCommand(command);

    std::cout << "时机成熟了，开始唤醒沉睡者，执行命令" << std::endl;
    remoteControl.ButtonPressed();
}