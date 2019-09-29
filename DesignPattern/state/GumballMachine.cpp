#include "stdafx.h"
#include "GumballMachine.h"

#include <assert.h>
#include <iostream>

GumbalMachine::GumbalMachine()
    : m_state(NON_COIN)
{
}

void GumbalMachine::InsertCoin()
{
    if (m_state == NON_COIN)
    {
        std::cout << "插入硬币，请旋转手柄或者退出硬币\n";
        m_state = HAS_COIN;
    }
    else if (m_state == HAS_COIN)
    {
        std::cout << "再次插入硬币，请旋转手柄或者退出硬币\n";
    }
    else if (m_state == SELL)
    {
        std::cout << "不能插入硬币，因为正在出售糖果\n";
    }
    else if (m_state == SELL_OUT)
    {
        std::cout << "不能插入硬币，因为糖果已售空\n";
    }
    else
    {
        assert(false);
    }
}

void GumbalMachine::EjectCoin()
{
    if (m_state == HAS_COIN)
    {
        std::cout << "退出硬币，请取走您的硬币\n";
        m_state = NON_COIN;
    }
    else
    {
        std::cout << "退出硬币操作无效\n";
    }
}

void GumbalMachine::RotateHandle()
{
    if (m_state == NON_COIN)
    {
        std::cout << "您还没有投入硬币\n";
    }
    else if (m_state == HAS_COIN)
    {
        std::cout << "进入售出糖果模式\n";
    }
    else if (m_state == SELL)
    {
        std::cout << "正在出售糖果，请稍后再试\n";
        m_state = SELL;
    }
    else if (m_state == SELL_OUT)
    {
        std::cout << "糖果已售罄，请您耐心等待\n";
    }
    else
    {
        assert(false);
    }
}

void GumbalMachine::Sell()
{
    static int count = 10;
    if (m_state == NON_COIN)
    {
        std::cout << "您还没有投入硬币\n";
    }
    else if (m_state == SELL)
    {
        if (--count > 0)
        {
            std::cout << "糖果已售出，请再次投入硬币\n";
            m_state = NON_COIN;
        }
        else
        {
            std::cout << "糖果已售罄\n";
            m_state = SELL_OUT;
        }
    }
    else if (m_state == SELL_OUT)
    {
        std::cout << "糖果已售罄\n";
    }
}