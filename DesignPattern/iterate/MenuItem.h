#pragma once
#include <string>

class MenuItem
{
public:
    MenuItem(const std::string& name, int price);
    ~MenuItem() = default;

    std::string& GetName() { return m_name; }

    int GetPrice() { return m_price; }

private:
    std::string m_name;
    
    int m_price;
};