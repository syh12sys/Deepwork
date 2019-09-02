#include "stdafx.h"
#include "Pizza.h"

#include <iostream>

void Pizza::Prepare()
{
    std::cout << "开始准备[" << m_name << "]的糖、面粉等各种调料" << std::endl;
}

void Pizza::Bake()
{
    std::cout << "开始烘烤" << std::endl;
}

void Pizza::Cute()
{
    std::cout << "把做好的大块面包切成小块" << std::endl;
}

void Pizza::Box()
{
    std::cout << "把小块秒爆装箱" << std::endl;
}
