#include "stdafx.h"
#include "BreakfastMenuIterate.h"

#include "BreakfastMenu.h"

BreakfastMenuIterate::BreakfastMenuIterate(const BreakfastMenu* breakfastMenu)
{
    m_breakfastMenu = const_cast<BreakfastMenu*>(breakfastMenu);
    m_currentIndex = 0;
}

bool BreakfastMenuIterate::HasNext()
{
    return m_currentIndex != BreakfastMenu::kMaxItem;
}

MenuItem* BreakfastMenuIterate::Next()
{
    MenuItem* currentItem = *(m_breakfastMenu->GetItem() + m_currentIndex);
    ++m_currentIndex;
    return currentItem;
}