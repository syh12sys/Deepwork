#include "stdafx.h"
#include "LemonCoffee.h"

#include <iostream>

int LemonCoffee::Cost()
{
    return __super::Cost() + 2;
}

void LemonCoffee::Descripte()
{
    std::cout << "我是一杯加糖的咖啡，价格再加上2元，总价格：" << Cost() << std::endl;
}