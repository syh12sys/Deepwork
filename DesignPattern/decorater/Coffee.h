#ifndef _Coffee_h_
#define _Coffee_h_

class Coffee
{
public:
    Coffee() = default;
    virtual ~Coffee() = default;

public:
    // 价格
    virtual int Cost() = 0;

    // 咖啡种类
    virtual void Descripte() = 0;
};

#endif