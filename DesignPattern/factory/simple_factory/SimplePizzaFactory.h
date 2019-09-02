
#pragma once

#include <memory>

#include "../Pizza.h"

// 最佳设计模式候选人，其实是从PizzaStore中隔离出变化的部分，也提供了复用创建对象的可能
class SimplePizzaFactory
{
public:
    SimplePizzaFactory() = default;
    ~SimplePizzaFactory() = default;

    std::shared_ptr<Pizza> Create(const std::string& pizzaType);
};
