#include "stdafx.h"
#include "LunchMenu.h"

#include "LunchMenuIterate.h"

LunchMenu::LunchMenu()
{
    MenuItem* menuItem = new MenuItem("∏€ ΩÏ“◊–∑π", 15);
    m_Items.push_back(menuItem);

    menuItem = new MenuItem("¿∞≥¶∏«ΩΩ∑π", 20);
    m_Items.push_back(menuItem);

    menuItem = new MenuItem("À·¿±ÀÒº‚∑€", 20);
    m_Items.push_back(menuItem);
}

LunchMenu::~LunchMenu()
{
    for (const auto& menu : m_Items)
    {
        delete menu;
    }
    m_Items.clear();
}

std::shared_ptr<Iterate> LunchMenu::CreateIterate()
{
    return std::shared_ptr<Iterate>(new LunchMenuIterate(this));
}