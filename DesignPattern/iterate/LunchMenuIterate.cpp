#include "stdafx.h"
#include "LunchMenuIterate.h"

#include "LunchMenu.h"

LunchMenuIterate::LunchMenuIterate(const LunchMenu* lunchMenu)
{
    m_lunchMenu = const_cast<LunchMenu*>(lunchMenu);
    m_currentIndex = m_lunchMenu->GetItems().begin();
}

bool LunchMenuIterate::HasNext()
{
   return m_currentIndex != m_lunchMenu->GetItems().end();
}

MenuItem* LunchMenuIterate::Next()
{
   return *m_currentIndex++;
}