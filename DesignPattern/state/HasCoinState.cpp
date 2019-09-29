#include "stdafx.h"
#include "HasCoinState.h"
#include "GumballMachinePattern.h"

#include <iostream>

HasCoinState::HasCoinState(GumballMachinePattern* gumbalMachine)
    : State(gumbalMachine)
{

}

void HasCoinState::InsertCoin()
{
    std::cout << "�Ѿ�����Ӳ�ң������ٴβ���Ӳ��\n";
}

void HasCoinState::EjectCoin()
{
    std::cout << "�˳�Ӳ��\n";
    m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetNonCoinState());
}

void HasCoinState::RotateHandle()
{
    std::cout << "��ת�ֱ������뷢��״̬\n";
    m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetSellState());
}

void HasCoinState::Sell()
{
    std::cout << "����ǰ������Ӳ��״̬��������ת�ֱ������˳�Ӳ��\n";
}