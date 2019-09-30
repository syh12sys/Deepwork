#pragma once

#include "stdint.h"

class GumballMonitor
{
public:
    GumballMonitor() = default;
    virtual ~GumballMonitor() = default;

    virtual uint32_t GetStatus() = 0;
};