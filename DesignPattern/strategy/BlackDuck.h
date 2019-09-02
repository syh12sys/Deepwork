#ifndef _BlackDuck_h_
#define _BlackDuck_h_

#include "Duck.h"

class BlackDuck : public Duck
{
public:
    BlackDuck() = default;
    ~BlackDuck() = default;

public:
    virtual void Display();
};

#endif // _Duck_h_