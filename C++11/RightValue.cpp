#include "pch.h"
#include "RightValue.h"

#include <iostream>

class A {
public:
    int a;
    int b;
};

A getTemp()
{
    return A();
}

void TestRigthValue()
{
    std::cout << "*********************��ֵ��ֵ����************************************\n";

    // ��ֵ������ֵ��������ʵ������ֵ���ð���ֵ��Ӧ��
    A a = getTemp();
    A& l_a = a;
    int size1 = sizeof(l_a);
    A* address1 = &l_a;

    // ��ֵ���ÿ����ӳ���ʱ��������������
    A&& r_a = getTemp();
    int size2 = sizeof(r_a);

    // ����������ֵ�����Ǹ���ֵ
    A* address =  &r_a;
}