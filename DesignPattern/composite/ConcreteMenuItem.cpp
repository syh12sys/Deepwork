#include "stdafx.h"
#include "ConcreteMenuItem.h"

#include <iostream>

void ConcreteMenuItem::Display()
{
    static uint32_t concreteMenuItemCount = 0;
    std::cout << "����Ҷ�ӽڵ�,���=" << ++concreteMenuItemCount <<"\n";
}
