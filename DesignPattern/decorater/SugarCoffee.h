#ifndef _SugarCoffee_h_
#define _SugarCoffee_h_

#include "CoffeeDecroter.h"

// 加糖咖啡
class SugarCoffee : public CoffeeDecroter
{
public:
    SugarCoffee() = default;
    ~SugarCoffee() = default;

public:
    // 价格
    int Cost() override;

    // 咖啡种类
    void Descripte() override;
};

#endif