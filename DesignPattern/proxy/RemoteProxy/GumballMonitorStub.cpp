#include "stdafx.h"
#include "GumballMonitorStub.h"

#include <iostream>

GumballMonitorStub::GumballMonitorStub()
{
    std::cout << "我是存根，我生活在子进程中\n";
}

uint32_t GumballMonitorStub::GetStatus()
{
    std::cout << "我是存根只有我才知道糖果机的状态，我接收ipc消息，然后读取状态，再通过ipc返回给主进程\n";
    return 1;
}