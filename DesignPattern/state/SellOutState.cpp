#include "stdafx.h"
#include "SellOutState.h"

#include <iostream>

SellOutState::SellOutState(GumballMachinePattern* gumbalMachine)
    : State(gumbalMachine)
{

}

void SellOutState::InsertCoin()
{
    std::cout << "�ǹ����ۿգ����ܲ���Ӳ��\n";
}

void SellOutState::EjectCoin()
{
    std::cout << "����û�в���Ӳ�ң����ܽ����˳�Ӳ�Ҳ���\n";
}

void SellOutState::RotateHandle()
{
    std::cout << "����û�в���Ӳ�ң����ܽ����˳�Ӳ�Ҳ���\n";
}

void SellOutState::Sell()
{
    std::cout << "�ǹ����ۿգ��޷������ǹ�\n";
}