#pragma once

#include "MenuComponent.h"

#include <stdint.h>
#include <vector>

class Menu : public MenuComponent
{
public:
    Menu() = default;
    ~Menu();

    void Display();

    void Add(MenuComponent* menuComponent) override;

    void Remove(MenuComponent* menuComponent) override;

    MenuComponent* GetAt(uint32_t i)  override;

    uint32_t Count() override;

private:
    std::vector<MenuComponent*> m_menus;
};