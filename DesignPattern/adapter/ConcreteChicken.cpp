#include "stdafx.h"
#include "ConcreteChicken.h"

#include <iostream>

void ConcreteChicken::Fly()
{
    std::cout << "�ҿ��Խ��ж̾������" <<std::endl;
}

void ConcreteChicken::Crow()
{
    std::cout << "�һ��฽�" << std::endl;
}