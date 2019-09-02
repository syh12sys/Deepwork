#include "stdafx.h"
#include "PizzaStore.h"
#include "Pizza.h"

#include <memory>
#include <iostream>

void PizzaStore::OrderPizza(const std::string& pizzaType)
{
    std::shared_ptr<Pizza> pizza(CreatePizza(pizzaType));
    pizza->Prepare();
    pizza->Bake();
    pizza->Cute();
    pizza->Box();    std::cout << "���Ե��������Ǿ���׼�����濾���ü���װ���ĵ����������ģ��Һܷ���" << std::endl;}