#include "stdafx.h"
#include "ConcreteObserver.h"

#include <iostream>

ConcreteObserver::ConcreteObserver()
{

}

ConcreteObserver::~ConcreteObserver()
{

}

void ConcreteObserver::OnStateChange(int state)
{
    std::cout << "我是观察者，我很开心，我不用关心我观察的对象，我只是等待通知" << std::endl;
    std::cout << "state变化为：" << state;
}