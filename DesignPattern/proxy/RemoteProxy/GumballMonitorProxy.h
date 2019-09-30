#pragma once

#include "GumballMonitor.h"

// 远程代理是进程通信的必备模式，可能你还没有意识到自己已经这样做了
// 从Chrome实际引用来看，一般不用基类进行约束proxy和stub可行为，否则会很不灵活，基类的定义主进程和子进程都会编译连接
class GumballMonitorProxy : public GumballMonitor
{
public:
    GumballMonitorProxy();
    ~GumballMonitorProxy() = default;

public:
    uint32_t GetStatus() override;
};