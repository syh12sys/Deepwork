#pragma once

#include "Iterate.h"

#include <vector>

class LunchMenu;

class LunchMenuIterate : public Iterate
{
public:
    LunchMenuIterate(const LunchMenu* lunchMenu);

    bool HasNext() override;

    MenuItem* Next() override;

private:
    LunchMenu* m_lunchMenu;

    std::vector<MenuItem*>::iterator m_currentIndex;
};