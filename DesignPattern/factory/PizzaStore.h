#pragma once

#include <string>
#include <memory>

class Pizza;

// 其实用一个大而全的简单工厂也能实现功能，但是这种方案和现实世界的距离太远了
// 简单工厂可以认为是总部提供的，每次分部新增披萨都要通知总部进行一些动作，如果这样设计耦合太深大家都觉得麻烦
// 工厂方法适用于上层制定框架，下层去应用的场景，这也是模板模式在创建对象上的具体应用
// 工厂方法是解决平行类层级结构的最佳方案
class PizzaStore
{
public:
    PizzaStore() = default;
    ~PizzaStore() = default;

public:
    void OrderPizza(const std::string& pizzaType);

public:
    virtual std::shared_ptr<Pizza> CreatePizza(const std::string& pizzaType) = 0;
};