#pragma once

// ģ��ģʽ��һ���ҹ������̵�˼·���ɸ����ԣ������ģʽֻ������������ʵ�ֵ�һ���ֶΣ�����������ö�̬ʵ�ֲ�ͬ��Ϊ������
// �����Ǻ�����ԭ�򣬾����˵���Ǹ߲���Ե��õײ㣬�ײ㲻�ܵ��ø߲㣻�������������ܵȷ��� 
// ��dll����������ݶ�����ʹ����ͬ��˼·�������
class Drink
{
public:
    Drink() = default;
    ~Drink() = default;

public:
    void BoilWater();

    virtual void Brew() = 0;

    void PourCup();

    virtual void AddSeasoning() = 0;
};