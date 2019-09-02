#include "stdafx.h"
#include "Client.h"

#include <memory>
#include <iostream>

#include "factory_method/NYPizzaStore.h"
#include "factory_method/ChicagoPizzaStore.h"

void Client::Order()
{
    std::cout << "��������ŦԼ���ˣ���ŦԼ�������������" << std::endl;
    std::shared_ptr<PizzaStore> nyPizzaStore(new NYPizzaStore);
    nyPizzaStore->OrderPizza("NYCheese");
    nyPizzaStore->OrderPizza("NYSweet");
    std::cout << std::endl;

    std::cout << "������֥�Ӹ���ˣ���֥�Ӹ�������������" << std::endl;
    std::shared_ptr<PizzaStore> chicagoPizzaStore(new ChicagoPizzaStore);
    chicagoPizzaStore->OrderPizza("ChicagoHam");
    chicagoPizzaStore->OrderPizza("ChicagoSpicy");
}