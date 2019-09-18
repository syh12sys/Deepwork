#include "stdafx.h"
#include "Menu.h"

#include <iostream>

Menu::~Menu()
{
    //for (uint32_t i = 0; i < Count(); ++i)
    //{
    //    delete m_menus[i];
    //}
    //m_menus.clear();
}

void Menu::Display()
{
    static uint32_t menuCount = 0;
    std::cout << "我是组合类的实现者， 序号=" << ++menuCount <<"\n";

    for (uint32_t i = 0; i < Count(); ++i)
    {
        m_menus[i]->Display();
    }
}

void Menu::Add(MenuComponent* menuComponent)
{
    m_menus.push_back(menuComponent);
}

void Menu::Remove(MenuComponent* menuComponent)
{
    m_menus.erase(std::find(m_menus.begin(), m_menus.end(), menuComponent));
}

MenuComponent* Menu::GetAt(uint32_t i)
{
    if (i >= m_menus.size())
    {
        return nullptr;
    }
    return m_menus[i];
}

uint32_t Menu::Count()
{
    return m_menus.size();
}