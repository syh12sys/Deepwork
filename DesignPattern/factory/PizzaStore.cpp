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
    pizza->Box();    std::cout << "所以的披萨都是经过准备、烘烤、裁剪、装箱四道工艺制作的，我很放心" << std::endl;}