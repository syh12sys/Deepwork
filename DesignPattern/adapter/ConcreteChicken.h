#pragma once

#include "Chicken.h"

class ConcreteChicken : public Chicken
{
public:
    void Fly() override;

    void Crow() override;
};