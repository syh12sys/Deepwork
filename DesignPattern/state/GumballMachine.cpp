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
        std::cout << "����Ӳ�ң�����ת�ֱ������˳�Ӳ��\n";
        m_state = HAS_COIN;
    }
    else if (m_state == HAS_COIN)
    {
        std::cout << "�ٴβ���Ӳ�ң�����ת�ֱ������˳�Ӳ��\n";
    }
    else if (m_state == SELL)
    {
        std::cout << "���ܲ���Ӳ�ң���Ϊ���ڳ����ǹ�\n";
    }
    else if (m_state == SELL_OUT)
    {
        std::cout << "���ܲ���Ӳ�ң���Ϊ�ǹ����ۿ�\n";
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
        std::cout << "�˳�Ӳ�ң���ȡ������Ӳ��\n";
        m_state = NON_COIN;
    }
    else
    {
        std::cout << "�˳�Ӳ�Ҳ�����Ч\n";
    }
}

void GumbalMachine::RotateHandle()
{
    if (m_state == NON_COIN)
    {
        std::cout << "����û��Ͷ��Ӳ��\n";
    }
    else if (m_state == HAS_COIN)
    {
        std::cout << "�����۳��ǹ�ģʽ\n";
    }
    else if (m_state == SELL)
    {
        std::cout << "���ڳ����ǹ������Ժ�����\n";
        m_state = SELL;
    }
    else if (m_state == SELL_OUT)
    {
        std::cout << "�ǹ����������������ĵȴ�\n";
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
        std::cout << "����û��Ͷ��Ӳ��\n";
    }
    else if (m_state == SELL)
    {
        if (--count > 0)
        {
            std::cout << "�ǹ����۳������ٴ�Ͷ��Ӳ��\n";
            m_state = NON_COIN;
        }
        else
        {
            std::cout << "�ǹ�������\n";
            m_state = SELL_OUT;
        }
    }
    else if (m_state == SELL_OUT)
    {
        std::cout << "�ǹ�������\n";
    }
}