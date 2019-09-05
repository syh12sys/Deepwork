#include "stdafx.h"
#include "BirdAdapter.h"
#include "Chicken.h"

#include <iostream>

void BirdAdapter::Fly()
{
    if (m_chicken)
    {
        for (int i = 0; i < 5; ++i)
        {
            m_chicken->Fly();
        }
    }
    std::cout << "5�ζ̾�����У�ģ��һ�������ķ���" << std::endl;
}

void BirdAdapter::Chirp()
{
    if (m_chicken)
    {
        m_chicken->Crow();
    }
    std::cout << "�฽�ģ�������" << std::endl;
}

void BirdAdapter::SetChicken(const std::shared_ptr<Chicken>& chicken)
{
    m_chicken = chicken;
}