#include "stdafx.h"
#include "LightCommand.h"

#include <iostream>

void LightCommand::Excute()
{
    std::cout << "我是命令的传递者，我组合接收命令的对象，开始调用执行者执行命令了" << std::endl;
    m_light.TurnOn();
}