
#pragma once

#include <string>

class Pizza
{
public:
    Pizza() = default;
    ~Pizza() = default;

public:
    virtual void Prepare();

    void Bake();

    void Cute();

    void Box();

protected:
    std::string m_name;
};