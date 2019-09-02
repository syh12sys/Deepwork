#include "stdafx.h"
#include "Client.h"

#include <memory>
#include <iostream>

#include "factory_method/NYPizzaStore.h"
#include "factory_method/ChicagoPizzaStore.h"

void Client::Order()
{
    std::cout << "我是来自纽约的人，我纽约的披萨店吃披萨" << std::endl;
    std::shared_ptr<PizzaStore> nyPizzaStore(new NYPizzaStore);
    nyPizzaStore->OrderPizza("NYCheese");
    nyPizzaStore->OrderPizza("NYSweet");
    std::cout << std::endl;

    std::cout << "我是来芝加哥的人，我芝加哥的披萨店吃披萨" << std::endl;
    std::shared_ptr<PizzaStore> chicagoPizzaStore(new ChicagoPizzaStore);
    chicagoPizzaStore->OrderPizza("ChicagoHam");
    chicagoPizzaStore->OrderPizza("ChicagoSpicy");
}