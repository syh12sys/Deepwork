#include "stdafx.h"
#include "RemoteProxyTest.h"
#include "GumballMonitorProxy.h"

#include <iostream>

void RemoteProxyTest::Test()
{
    GumballMonitorProxy gumballMonitorProxy;
    uint32_t gumballStatus = gumballMonitorProxy.GetStatus();
    if (gumballStatus == 1)
    {
        std::cout << "�ǹ��������ˣ��Ͻ����˵�����·����ά��\n";
    }
    else
    {
        std::cout << "�ǹ�������״̬����\n";
    }
}