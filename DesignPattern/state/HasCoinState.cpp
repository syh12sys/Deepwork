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
    std::cout << "已经插入硬币，不能再次插入硬币\n";
}

void HasCoinState::EjectCoin()
{
    std::cout << "退出硬币\n";
    m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetNonCoinState());
}

void HasCoinState::RotateHandle()
{
    std::cout << "旋转手柄，进入发售状态\n";
    m_gumbalMachine->SetCurrentState(m_gumbalMachine->GetSellState());
}

void HasCoinState::Sell()
{
    std::cout << "您当前处于有硬币状态，可以旋转手柄或者退出硬币\n";
}