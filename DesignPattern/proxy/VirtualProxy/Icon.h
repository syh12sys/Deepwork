#pragma once

#include <stdint.h>

class Icon
{
public:
    Icon() = default;
    virtual ~Icon() = default;

public:
   virtual uint32_t GetWidth() { return 0; }

   virtual uint32_t GetHeight() { return 0; }

   virtual void Display() = 0;
};