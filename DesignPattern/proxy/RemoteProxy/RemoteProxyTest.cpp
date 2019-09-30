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
        std::cout << "糖果机故障了，赶紧派人到天堂路进行维修\n";
    }
    else
    {
        std::cout << "糖果机运行状态良好\n";
    }
}