#pragma once

#include "Drink.h"

class NewSanQi : public Drink
{
public:
    NewSanQi() = default;
    ~NewSanQi() = default;

public:
    void Brew() override;

    void AddSeasoning() override;
};