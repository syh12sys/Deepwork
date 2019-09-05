#pragma once

class Chicken
{
public:
    Chicken() = default;
    ~Chicken() = default;

    virtual void Fly() = 0;

    virtual void Crow() = 0;
};