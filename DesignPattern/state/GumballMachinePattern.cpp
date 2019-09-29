#include "stdafx.h"
#include "GumballMachinePattern.h"

#include "HasCoinState.h"
#include "NonCoinState.h"
#include "SellOutState.h"
#include "SellState.h"

GumballMachinePattern::GumballMachinePattern(uint32_t gumballCount)
{
    m_hasCoinState.reset(new HasCoinState(this));
    m_nonCoinState.reset(new NonCoinState(this));
    m_sellOutState.reset(new SellOutState(this));
    m_sellState.reset(new SellState(this));

    // ÆðÊ¼×´Ì¬
    m_currentState = m_sellOutState;

    m_gumballCount = gumballCount;

}

void GumballMachinePattern::SetCurrentState(std::shared_ptr<State> state)
{
    m_currentState = state;
}

void GumballMachinePattern::DecreaseGumballCount()
{
    if (m_currentState > 0)
    {
        --m_gumballCount;
    }
}

void GumballMachinePattern::InsertCoin()
{
    m_currentState->InsertCoin();
}

void GumballMachinePattern::EjectCoin()
{
    m_currentState->EjectCoin();
}

void GumballMachinePattern::RotateHandle()
{
    m_currentState->RotateHandle();
}

void GumballMachinePattern::Sell()
{
    m_currentState->Sell();
}