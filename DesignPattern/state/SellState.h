#pragma once

#include "State.h"

class SellState : public State
{
public:
    SellState(GumballMachinePattern* gumbalMachine);
    ~SellState() = default;

    void InsertCoin() override;

    void EjectCoin() override;

    void RotateHandle() override;

    void Sell() override;
};