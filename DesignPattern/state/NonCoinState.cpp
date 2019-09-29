#include "stdafx.h"
#include "NonCoinState.h"
#include "GumballMachinePattern.h"

#include <iostream>

NonCoinState::NonCoinState(GumballMachinePattern* gumbalMachine)
    : State(gumbalMachine)
{
}

void NonCoinState::InsertCoin()
{
    std::cout << "�����ڲ���Ӳ��\n";
    m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetHasCoinState());
}

void NonCoinState::EjectCoin()
{
    std::cout << "����û�в���Ӳ��\n";
}

void NonCoinState::RotateHandle()
{
    std::cout << "����û�в���Ӳ��\n";
}

void NonCoinState::Sell()
{
    std::cout << "����û�в���Ӳ��\n";
}