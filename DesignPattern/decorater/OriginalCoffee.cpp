#include "stdafx.h"
#include "OriginalCoffee.h"

#include <iostream>

int OriginalCoffee::Cost()
{
    return 10;
}

void OriginalCoffee::Descripte()
{
    std::cout << "����һ��ʲô��û�ӵ�ԭζ���ȣ��ǳ��࣬�ҵļ۸���:" << Cost() << std::endl;
}