#ifndef _CoffeeDecroter_h_
#define _CoffeeDecroter_h_

#include "Coffee.h"

// 动态的为coffee加上职责
// 选择时机增加职责：职责是原始对象的一部分，但是需要的时候才动态组合进来，不需要的时候就没有
// 对象职责的动态组装
class CoffeeDecroter : public Coffee
{
public:
    CoffeeDecroter();
    ~CoffeeDecroter() = default;

public:
    void SetCoffer(Coffee* coffee);

    // 价格
    int Cost() override;

    // 咖啡种类
    void Descripte() override;

private:
    Coffee* m_coffer;
};

#endif