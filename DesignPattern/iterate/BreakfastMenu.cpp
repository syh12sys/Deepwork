#include "stdafx.h"
#include "BreakfastMenu.h"

#include "BreakfastMenuIterate.h"

BreakfastMenu::BreakfastMenu()
{
    MenuItem* item = new MenuItem("¼å±ı¹û×Ó", 5);
    m_Items[0] = item;

    item = new MenuItem("ÓÍÌõ", 2);
    m_Items[1] = item;

    item = new MenuItem("¶¹¸¯ÄÔ", 3);
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