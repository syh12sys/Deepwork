#include "stdafx.h"
#include "OriginalCoffee.h"

#include <iostream>

int OriginalCoffee::Cost()
{
    return 10;
}

void OriginalCoffee::Descripte()
{
    std::cout << "我是一杯什么都没加的原味咖啡，非常苦，我的价格是:" << Cost() << std::endl;
}