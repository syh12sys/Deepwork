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
    std::cout << "���ǹ۲��ߣ��Һܿ��ģ��Ҳ��ù����ҹ۲�Ķ�����ֻ�ǵȴ�֪ͨ" << std::endl;
    std::cout << "state�仯Ϊ��" << state;
}