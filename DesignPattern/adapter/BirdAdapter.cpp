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
    std::cout << "5´Î¶Ì¾àÀë·ÉÐÐ£¬Ä£ÄâÒ»´ÎÕæÕýµÄ·ÉÏè" << std::endl;
}

void BirdAdapter::Chirp()
{
    if (m_chicken)
    {
        m_chicken->Crow();
    }
    std::cout << "à¸à¸½ÐÄ£Äâßóßó½Ð" << std::endl;
}

void BirdAdapter::SetChicken(const std::shared_ptr<Chicken>& chicken)
{
    m_chicken = chicken;
}