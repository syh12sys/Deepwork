#pragma once

class GumballMachinePattern;

class State
{
public:
    State(GumballMachinePattern* gumbalMachine);
    virtual ~State() = default;

    virtual void InsertCoin() = 0;

    virtual void EjectCoin() = 0;

    virtual void RotateHandle() = 0;

    virtual void Sell() = 0;

protected:
    GumballMachinePattern* m_gumbalMachine;
};