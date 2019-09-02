#include "stdafx.h"

#include "Context.h"
#include "RedDuck.h"
#include "BlackDuck.h"
#include "RubberDuck.h"
#include "FlyWithWing.h"
#include "NotFly.h"

#include <iostream>
#include <memory>

void Context::Show()
{
    std::shared_ptr<Duck> redDuck(new RedDuck);
    redDuck->SetDuckFly(std::shared_ptr<FlyWithWing>(new FlyWithWing));
    redDuck->Display();
    redDuck->Fly();
    redDuck->Quack();
    std::cout << std::endl;

    std::shared_ptr<Duck> blackDuck(new BlackDuck);
    blackDuck->SetDuckFly(std::shared_ptr<FlyWithWing>(new FlyWithWing));
    blackDuck->Display();
    blackDuck->Fly();
    blackDuck->Quack();
    std::cout << std::endl;

    std::shared_ptr<Duck> rubberDuck(new RubberDuck);
    rubberDuck->SetDuckFly(std::shared_ptr<NotFly>(new NotFly));
    rubberDuck->Display();
    rubberDuck->Fly();
    rubberDuck->Quack();
    std::cout << std::endl;
}

