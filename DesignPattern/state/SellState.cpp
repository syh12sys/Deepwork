#include "stdafx.h"
#include "SellState.h"
#include "GumballMachinePattern.h"

#include <iostream>

SellState::SellState(GumballMachinePattern* gumbalMachine)
    : State(gumbalMachine)
{
}

void SellState::InsertCoin()
{
    std::cout << "正在出售糖果，请稍后再插入硬币\n";
}

void SellState::EjectCoin()
{
    std::cout << "正在出售糖果，请稍后再进行退币操作\n";
}

void SellState::RotateHandle()
{
    std::cout << "正在出售糖果，请稍后再进行退币操作\n";
}

void SellState::Sell()
{
    m_gumbalMachine->DecreaseGumballCount();
    std::cout << "请取走您的糖果\n";
    if (m_gumbalMachine->GumballCount() > 0)
    {
        m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetNonCoinState());
    }
    else
    {
        m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetSellOutState());
    }
}