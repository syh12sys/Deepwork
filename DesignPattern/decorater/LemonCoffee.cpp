#include "stdafx.h"
#include "LemonCoffee.h"

#include <iostream>

int LemonCoffee::Cost()
{
    return __super::Cost() + 2;
}

void LemonCoffee::Descripte()
{
    std::cout << "����һ�����ǵĿ��ȣ��۸��ټ���2Ԫ���ܼ۸�" << Cost() << std::endl;
}