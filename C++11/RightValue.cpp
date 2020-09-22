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
    std::cout << "*********************左值右值主题************************************\n";

    // 右值赋给左值，这是其实常量左值引用绑定右值的应用
    A a = getTemp();
    A& l_a = a;
    int size1 = sizeof(l_a);
    A* address1 = &l_a;

    // 右值引用可以延长临时变量的生命周期
    A&& r_a = getTemp();
    int size2 = sizeof(r_a);

    // 已命名的右值引用是个右值
    A* address =  &r_a;
}