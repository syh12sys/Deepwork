#pragma once

// 模板模式是一个找共用流程的思路（可复用性），设计模式只是其面向对象的实现的一种手段，对象可以利用多态实现不同行为的区分
// 背后是好莱坞原则，具体地说就是高层可以调用底层，底层不能调用高层；多用于组件、框架等方面 
// 在dll、组件、数据都可以使用相同的思路解决问题
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