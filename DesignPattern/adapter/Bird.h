#pragma once

class Bird
{
public:
    Bird() = default;
    ~Bird() = default;

    virtual void Fly() = 0;

    // ίσίσ½Π
    virtual void Chirp() = 0;
};