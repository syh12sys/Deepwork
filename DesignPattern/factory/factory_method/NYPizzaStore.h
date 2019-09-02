#pragma once
#include "../PizzaStore.h"

#include <string>

class NYPizzaStore : public PizzaStore
{
public:
    NYPizzaStore() = default;
    ~NYPizzaStore() = default;

public:
    std::shared_ptr<Pizza> CreatePizza(const std::string& pizzaType) override;
};