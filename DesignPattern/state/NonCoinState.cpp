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
    std::cout << "您正在插入硬币\n";
    m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetHasCoinState());
}

void NonCoinState::EjectCoin()
{
    std::cout << "您还没有插入硬币\n";
}

void NonCoinState::RotateHandle()
{
    std::cout << "您还没有插入硬币\n";
}

void NonCoinState::Sell()
{
    std::cout << "您还没有插入硬币\n";
}