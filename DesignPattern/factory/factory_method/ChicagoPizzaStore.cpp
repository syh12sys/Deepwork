#include "stdafx.h"
#include "ChicagoPizzaStore.h"
#include "ChicagoHamPizza.h"
#include "ChicagoSpicyPizza.h"

std::shared_ptr<Pizza> ChicagoPizzaStore::CreatePizza(const std::string& pizzaType)
{
    std::shared_ptr<Pizza> pizza;
    if (pizzaType == "ChicagoHam")
    {
        pizza.reset(new ChicagoHamPizza);
    }
    else if (pizzaType == "ChicagoSpicy")
    {
        pizza.reset(new ChicagoSpicyPizza);
    }
    return pizza;
}