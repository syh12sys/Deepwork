
#pragma once

#include <memory>

#include "../Pizza.h"

// ������ģʽ��ѡ�ˣ���ʵ�Ǵ�PizzaStore�и�����仯�Ĳ��֣�Ҳ�ṩ�˸��ô�������Ŀ���
class SimplePizzaFactory
{
public:
    SimplePizzaFactory() = default;
    ~SimplePizzaFactory() = default;

    std::shared_ptr<Pizza> Create(const std::string& pizzaType);
};
