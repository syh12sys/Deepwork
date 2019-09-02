#include "stdafx.h"
#include "SimplePizzaFactory.h"



#include "../factory_method/ChicagoHamPizza.h"
#include "../factory_method/NYCheesePizza.h"

std::shared_ptr<Pizza> SimplePizzaFactory::Create(const std::string& pizzaType)
{
    std::shared_ptr<Pizza> pizza;
    if (pizzaType == "cheese")
    {
        pizza.reset(new NYCheesePizza);
    }
    else if (pizzaType == "ham")
    {
        pizza.reset(new ChicagoHamPizza);
    }
    return pizza;
}
