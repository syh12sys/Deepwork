#pragma once

#include "MenuItem.h"

#include <memory>

class Iterate;

class BreakfastMenu
{
public:
    BreakfastMenu();
    ~BreakfastMenu();

    static const int kMaxItem = 3;

    MenuItem** GetItem() { return m_Items; }

    std::shared_ptr<Iterate> CreateIterate();

private:

    MenuItem* m_Items[kMaxItem];
};