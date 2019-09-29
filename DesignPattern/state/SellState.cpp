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
    std::cout << "���ڳ����ǹ������Ժ��ٲ���Ӳ��\n";
}

void SellState::EjectCoin()
{
    std::cout << "���ڳ����ǹ������Ժ��ٽ����˱Ҳ���\n";
}

void SellState::RotateHandle()
{
    std::cout << "���ڳ����ǹ������Ժ��ٽ����˱Ҳ���\n";
}

void SellState::Sell()
{
    m_gumbalMachine->DecreaseGumballCount();
    std::cout << "��ȡ�������ǹ�\n";
    if (m_gumbalMachine->GumballCount() > 0)
    {
        m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetNonCoinState());
    }
    else
    {
        m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetSellOutState());
    }
}