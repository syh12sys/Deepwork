#ifndef _ConcreteObserver_h_
#define _ConcreteObserver_h_

#include "Subject.h"

class ConcreteObserver : public Subject::Observer
{
public:
    ConcreteObserver();
    ~ConcreteObserver();

public:
    // override from Observer
    void OnStateChange(int state) override;
};

#endif