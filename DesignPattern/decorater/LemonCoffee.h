#ifndef _LemonCoffee_h_
#define _LemonCoffee_h_

#include "CoffeeDecroter.h"

// 加柠檬的咖啡
class LemonCoffee : public CoffeeDecroter
{
public:
    LemonCoffee() = default;
    ~LemonCoffee() = default;

public:
    // 价格
    int Cost() override;

    // 咖啡种类
    void Descripte() override;
};

#endif