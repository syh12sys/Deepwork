#ifndef _OriginalCoffee_h_
#define _OriginalCoffee_h_

#include "CoffeeDecroter.h"

// 原味咖啡
class OriginalCoffee : public CoffeeDecroter
{
public:
    OriginalCoffee() = default;
    ~OriginalCoffee() = default;

public:
    // 价格
    int Cost() override;

    // 咖啡种类
    void Descripte() override;
};

#endif