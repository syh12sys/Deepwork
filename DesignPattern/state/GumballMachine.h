#pragma once

// �ͳ���߼�ʵ�ַ�ʽ
// ״̬����һ��������Ϊ���Ľ�������˼·����ʵ�����д��ڴ��������ݵĲ���
// �ر���ö��������Ҫ�����ע��ö����ζ�ŷ��ࡢ������
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