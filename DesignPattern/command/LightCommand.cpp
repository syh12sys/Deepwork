#include "stdafx.h"
#include "LightCommand.h"

#include <iostream>

void LightCommand::Excute()
{
    std::cout << "��������Ĵ����ߣ�����Ͻ�������Ķ��󣬿�ʼ����ִ����ִ��������" << std::endl;
    m_light.TurnOn();
}