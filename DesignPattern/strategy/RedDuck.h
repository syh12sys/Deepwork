#ifndef _RedDuck_h_
#define _RedDuck_h_

#include "Duck.h"

class RedDuck : public Duck
{
public:
    RedDuck() = default;
    ~RedDuck() = default;

public:
    virtual void Display();
};

#endif // _Duck_h_