#pragma once
#include "State.h"

class HasCoinState : public State
{
public:
    HasCoinState(GumballMachinePattern* gumbalMachine);
    ~HasCoinState() = default;

    void InsertCoin() override;

    void EjectCoin() override;

    void RotateHandle() override;

    void Sell() override;
};