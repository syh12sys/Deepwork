#include "stdafx.h"
#include "CoffeeDecroter.h"

#include <iostream>

CoffeeDecroter::CoffeeDecroter()
    : m_coffer(nullptr)
{

}

void CoffeeDecroter::SetCoffer(Coffee* coffee)
{
    m_coffer = coffee;
}

int CoffeeDecroter::Cost()
{
    return m_coffer ? m_coffer->Cost() : 0;
}

void CoffeeDecroter::Descripte()
{
    if (m_coffer)
    {
        m_coffer->Descripte();
    }
}