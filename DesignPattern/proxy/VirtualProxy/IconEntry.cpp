#include "stdafx.h"
#include "IconEntry.h"

#include <iostream>

uint32_t IconEntry::GetWidth()
{
    return 800;
}

uint32_t IconEntry::GetHeight()
{
    return 600;
}

void IconEntry::Display()
{
    std::cout << "����һ�Ŵ���������ŮͼƬ\n";
}