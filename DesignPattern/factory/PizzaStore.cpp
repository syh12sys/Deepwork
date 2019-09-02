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
    pizza->Box();