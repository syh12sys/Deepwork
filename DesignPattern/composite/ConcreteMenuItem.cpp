#include "stdafx.h"
#include "ConcreteMenuItem.h"

#include <iostream>

void ConcreteMenuItem::Display()
{
    static uint32_t concreteMenuItemCount = 0;
    std::cout << "我是叶子节点,序号=" << ++concreteMenuItemCount <<"\n";
}
