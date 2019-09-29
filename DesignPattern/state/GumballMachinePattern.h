#pragma once

#include <memory>

class State;
class HasCoinState;
class NonCoinState;
class SellOutState;
class SellState;

// �������ʵ�ַ�ʽ�������Ӧ�Ա仯��������ά����
// ״̬���ģʽ���ǰ� �������ʵ�ֵ�״̬�������Ʒ,���Ǵ�����ƶ����ϵ���ڸ��ӣ�����ʵ��
// ״̬������ջ���� �����ݳ���Ҳ�����кܶ��������ƣ�����״̬�������������ȼ���
// ����һ���ջ�����۽�Ҫ��������Ҫ������GoF���ģʽ����ֻ�Ǽ�������е�һС���֣��������������Ƶ�һ�����棬��ʵ������ɫɫ�����ģ���Ƿǳ���ģ�
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

    // �ǹ��ĸ���
    uint32_t m_gumballCount;
};