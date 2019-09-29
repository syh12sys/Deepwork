#include "stdafx.h"
#include "SellOutState.h"

#include <iostream>

SellOutState::SellOutState(GumballMachinePattern* gumbalMachine)
    : State(gumbalMachine)
{

}

void SellOutState::InsertCoin()
{
    std::cout << "糖果已售空，不能插入硬币\n";
}

void SellOutState::EjectCoin()
{
    std::cout << "您还没有插入硬币，不能进行退出硬币操作\n";
}

void SellOutState::RotateHandle()
{
    std::cout << "您还没有插入硬币，不能进行退出硬币操作\n";
}

void SellOutState::Sell()
{
    std::cout << "糖果已售空，无法出售糖果\n";
}