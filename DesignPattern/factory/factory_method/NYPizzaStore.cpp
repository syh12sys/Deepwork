#include "stdafx.h"
#include "NYPizzaStore.h"
#include "NYCheesePizza.h"
#include "NYSweetPizza.h"

std::shared_ptr<Pizza> NYPizzaStore::CreatePizza(const std::string& pizzaType)
{
    std::shared_ptr<Pizza> pizza;
    if (pizzaType == "NYCheese")
    {
        pizza.reset(new NYCheesePizza);
    }
    else if (pizzaType == "NYSweet")
    {
        pizza.reset(new NYSweetPizza);
    }
    return pizza;
}