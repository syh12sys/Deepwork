#pragma once

#include "MenuComponent.h"

class ConcreteMenuItem : public MenuComponent
{
public:
    ConcreteMenuItem() = default;
    ~ConcreteMenuItem() = default;

public:
    void Display() override;
};