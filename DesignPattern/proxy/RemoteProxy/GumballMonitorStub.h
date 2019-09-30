#pragma once

#include "GumballMonitor.h"

class GumballMonitorStub : public GumballMonitor
{
public:
    GumballMonitorStub();
    ~GumballMonitorStub() = default;

    uint32_t GetStatus() override;
};