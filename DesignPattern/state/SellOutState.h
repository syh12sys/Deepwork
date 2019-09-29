#pragma once
#include "State.h"

class SellOutState : public State
{
public:
    SellOutState(GumballMachinePattern* gumbalMachine);
    ~SellOutState() = default;

    void InsertCoin() override;

    void EjectCoin() override;

    void RotateHandle() override;

    void Sell() override;
};