#pragma once

#include "Drink.h"

class NewTea : public Drink
{
public:
    NewTea() = default;
    ~NewTea() = default;

public:
    void Brew() override;

    void AddSeasoning() override;
};