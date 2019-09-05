#include "stdafx.h"
#include "ConcreteBird.h"

#include <iostream>

void ConcreteBird::Fly()
{
    std::cout << "我可以自由飞翔" << std::endl;
}

void ConcreteBird::Chirp()
{
    std::cout << "我可以唧唧叫" << std::endl;
}