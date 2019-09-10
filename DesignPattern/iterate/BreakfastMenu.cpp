#include "stdafx.h"
#include "BreakfastMenu.h"

#include "BreakfastMenuIterate.h"

BreakfastMenu::BreakfastMenu()
{
    MenuItem* item = new MenuItem("�������", 5);
    m_Items[0] = item;

    item = new MenuItem("����", 2);
    m_Items[1] = item;

    item = new MenuItem("������", 3);
    m_Items[2] = item;

}

BreakfastMenu::~BreakfastMenu()
{
    for (int i = 0; i < kMaxItem; ++i)
    {
        delete m_Items[i];
        m_Items[i] = nullptr;
    }
}

std::shared_ptr<Iterate> BreakfastMenu::CreateIterate()
{
    return std::shared_ptr<Iterate>(new BreakfastMenuIterate(this));
}