#pragma once
#include "../PizzaStore.h"

#include <string>

class ChicagoPizzaStore : public PizzaStore
{
public:
    ChicagoPizzaStore() = default;
    ~ChicagoPizzaStore() = default;

public:
    std::shared_ptr<Pizza> CreatePizza(const std::string& pizzaType) override;
};