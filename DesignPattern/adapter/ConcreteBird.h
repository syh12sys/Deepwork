#pragma once

#include "Bird.h"

class ConcreteBird : public Bird
{
public:
    ConcreteBird() = default;
    ~ConcreteBird() = default;

    void Fly() override;

    void Chirp() override;
};