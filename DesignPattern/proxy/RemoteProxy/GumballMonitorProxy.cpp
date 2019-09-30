#include "stdafx.h"
#include "GumballMonitorProxy.h"

#include "GumballMonitorStub.h"

#include <iostream>

GumballMonitorProxy::GumballMonitorProxy()
{
    std::cout << "���Ǵ�����������host��������\n";
}

uint32_t GumballMonitorProxy::GetStatus()
{
    std::cout << "���Ǵ�����ȡ�ǹ�����״̬����Ҫ����ipc��Ϣ������������\n";

    // ����ģ��ipc��ϢͨѶ
    GumballMonitorStub gumballMonitorStub;
    return gumballMonitorStub.GetStatus();
}