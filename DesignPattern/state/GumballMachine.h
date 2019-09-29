#pragma once

// 最传统的逻辑实现方式
// 状态机是一个以数据为中心解决问题的思路，现实世界中存在大量对数据的操作
// 特别是枚举类型需要额外关注，枚举意味着分类、函数等
class GumbalMachine
{
public:
    GumbalMachine();
    ~GumbalMachine() = default;

public:

    enum State
    {
        NON_COIN,

        HAS_COIN,

        SELL,

        SELL_OUT
    };

    void InsertCoin();

    void EjectCoin();

    void RotateHandle();

    void Sell();

private:
    State m_state;
};