#ifndef _RubberDuck_h_
#define _RubberDuck_h_

#include "Duck.h"

class RubberDuck : public Duck
{
public:
    RubberDuck() = default;
    ~RubberDuck() = default;

public:
    virtual void Display();
};

#endif 