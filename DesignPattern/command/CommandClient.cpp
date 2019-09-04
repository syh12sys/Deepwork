#include "stdafx.h"
#include "CommandClient.h"
#include "RomoteControl.h"
#include "LightCommand.h"

#include <memory>
#include <iostream>


void CommandClient::Test()
{   
    std::cout << "��ʼ������������浽���������" << std::endl;
    std::shared_ptr<Command> command(new LightCommand);
    RomoteControl remoteControl;
    remoteControl.SetCommand(command);

    std::cout << "ʱ�������ˣ���ʼ���ѳ�˯�ߣ�ִ������" << std::endl;
    remoteControl.ButtonPressed();
}