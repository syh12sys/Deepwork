#include "stdafx.h"
#include "ConcreteChicken.h"

#include <iostream>

void ConcreteChicken::Fly()
{
    std::cout << "我可以进行短距离飞行" <<std::endl;
}

void ConcreteChicken::Crow()
{
    std::cout << "我会喔喔叫" << std::endl;
}