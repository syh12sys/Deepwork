#include "stdafx.h"
#include "GumballMonitorStub.h"

#include <iostream>

GumballMonitorStub::GumballMonitorStub()
{
    std::cout << "���Ǵ�������������ӽ�����\n";
}

uint32_t GumballMonitorStub::GetStatus()
{
    std::cout << "���Ǵ��ֻ���Ҳ�֪���ǹ�����״̬���ҽ���ipc��Ϣ��Ȼ���ȡ״̬����ͨ��ipc���ظ�������\n";
    return 1;
}