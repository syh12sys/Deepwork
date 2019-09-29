#pragma once
#include "State.h"

class NonCoinState : public State
{
public:
    NonCoinState(GumballMachinePattern* gumbalMachine);
    ~NonCoinState() = default;

    void InsertCoin() override;

    void EjectCoin() override;

    void RotateHandle() override;

    void Sell() override;

};