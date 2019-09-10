#pragma once

#include "MenuItem.h"

#include <vector>
#include <memory>

class Iterate;

class LunchMenu
{
public:
    LunchMenu();
    ~LunchMenu();

    std::vector<MenuItem*>& GetItems() { return m_Items; }

    std::shared_ptr<Iterate> CreateIterate();

private:
    std::vector<MenuItem*> m_Items;
};