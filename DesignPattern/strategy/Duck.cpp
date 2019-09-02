#include "stdafx.h"
#include "Duck.h"

#include <iostream>

void Duck::SetDuckFly(std::shared_ptr<DuckFly> duckFly)
{
    m_duckFly = duckFly;
}

void Duck::Fly()
{
    if (m_duckFly)
    {
        m_duckFly->Fly();
    }
}

void Duck::Quack()
{
    std::cout << "ÎÒ¸Â¸Â½Ð" << std::endl;
}