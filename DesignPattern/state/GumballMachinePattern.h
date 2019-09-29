#pragma once

#include <memory>

class State;
class HasCoinState;
class NonCoinState;
class SellOutState;
class SellState;

// 面向对象实现方式，可提高应对变化，提升可维护性
// 状态设计模式就是把 面向对象实现的状态机的替代品,但是此种设计对象关系过于复杂，并不实用
// 状态机最大收获就是 从数据出发也可以有很多巧妙的设计，例如状态机、链表驱动等技巧
// 另外一个收获就是眼界要开阔，不要局限于GoF设计模式，它只是技术设计中的一小部分，技术设计又是设计的一个方面，现实中形形色色的设计模型是非常多的，
class GumballMachinePattern
{
public:
    GumballMachinePattern(uint32_t gumballCount);
    ~GumballMachinePattern() = default;

    void SetCurrentState(std::shared_ptr<State> state);

    std::shared_ptr<State> GetHasCoinState() const { return m_hasCoinState; }

    std::shared_ptr<State> GetNonCoinState() const { return m_nonCoinState; }

    std::shared_ptr<State> GetSellOutState() const { return m_sellOutState; }

    std::shared_ptr<State> GetSellState() const { return m_sellState; }

    void InsertCoin();

    void EjectCoin();

    void RotateHandle();

    void Sell();

    uint32_t GumballCount() const { return m_gumballCount; }

    void DecreaseGumballCount();
private:
    std::shared_ptr<State> m_hasCoinState;

    std::shared_ptr<State> m_nonCoinState;

    std::shared_ptr<State> m_sellOutState;

    std::shared_ptr<State> m_sellState;

    std::shared_ptr<State> m_currentState;

    // 糖果的个数
    uint32_t m_gumballCount;
};