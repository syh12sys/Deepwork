#include "stdafx.h"
#include "SugarCoffee.h"

#include <iostream>

int SugarCoffee::Cost()
{
    return __super::Cost() + 1;
}

void SugarCoffee::Descripte()
{
    std::cout << "����һ�����ʵĿ��ȣ��۸��ټ���1Ԫ���ܼ۸�" << Cost() << std::endl;
}