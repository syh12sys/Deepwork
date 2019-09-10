#pragma once

#include "Iterate.h"

class BreakfastMenu;

class BreakfastMenuIterate : public Iterate
{
public:
    BreakfastMenuIterate(const BreakfastMenu* breakfastMenu);
    ~BreakfastMenuIterate() = default;

public:
    bool HasNext() override;

    MenuItem* Next() override;

private:
    BreakfastMenu* m_breakfastMenu;

    int m_currentIndex;
};