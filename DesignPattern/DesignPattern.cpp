// DesignPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "observer/Subject.h"
#include "observer/ConcreteObserver.h"

#include "decorater/CoffeeShop.h"

#include "strategy/Context.h"

#include "factory/Client.h"

#include "singleton/Singleton.h"
#include "singleton/LazySingleton.h"

int _tmain(int argc, _TCHAR* argv[])
{
    Subject subject;
    ConcreteObserver* concreteObserver = new ConcreteObserver;
    subject.AddObserver(concreteObserver);

    subject.SetState(1);
    
    
    // 动态添加删除观察则 
    subject.RemoveObserver(concreteObserver);
    subject.SetState(2);
    delete concreteObserver;


    std::cout << "\n********************装饰模式************************" << std::endl;
    CoffeeShop coffeeShop;
    coffeeShop.Sell();

    std::cout << "\n********************策略模式************************" << std::endl;
    Context context;
    context.Show();

    std::cout << "\n********************工厂模式************************" << std::endl;
    Client client;
    client.Order();

    std::cout << "\n********************单例模式，最简单却最有用************************" << std::endl;
    Singleton::GetInstance();
    LazySingleton::GetInstance();

    getchar();
	return 0;
}

