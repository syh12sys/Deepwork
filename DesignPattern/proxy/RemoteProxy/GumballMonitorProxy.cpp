#include "stdafx.h"
#include "GumballMonitorProxy.h"

#include "GumballMonitorStub.h"

#include <iostream>

GumballMonitorProxy::GumballMonitorProxy()
{
    std::cout << "我是代理，我生活在host进程里面\n";
}

uint32_t GumballMonitorProxy::GetStatus()
{
    std::cout << "我是代理，获取糖果机的状态，我要发起ipc消息给其它进程了\n";

    // 这里模拟ipc消息通讯
    GumballMonitorStub gumballMonitorStub;
    return gumballMonitorStub.GetStatus();
}