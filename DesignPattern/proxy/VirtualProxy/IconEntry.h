#pragma once

#include "Icon.h"

class IconEntry : public Icon
{
public:
    IconEntry() = default;
    ~IconEntry() = default;

    uint32_t GetWidth() override;

    uint32_t GetHeight() override;

    void Display() override;
};