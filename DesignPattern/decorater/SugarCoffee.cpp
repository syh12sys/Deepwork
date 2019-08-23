#include "stdafx.h"
#include "SugarCoffee.h"

#include <iostream>

int SugarCoffee::Cost()
{
    return __super::Cost() + 1;
}

void SugarCoffee::Descripte()
{
    std::cout << "我是一杯柠檬的咖啡，价格再加上1元，总价格：" << Cost() << std::endl;
}