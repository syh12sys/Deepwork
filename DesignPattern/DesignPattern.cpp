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

#include "command/CommandClient.h"

#include "adapter/AdapterTest.h"

#include "facade/facade.h"

#include "template/templateTest.h"

#include "iterate/Waiter.h"

#include "composite/ComponentTest.h"

#include "proxy/RemoteProxy/RemoteProxyTest.h"

#include "proxy/VirtualProxy/VirtualProxyTest.h"

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

    std::cout << "\n********************命令模式，这么多年一直没理解的模式，通过实例现在终于理解了************************" << std::endl;
    CommandClient commandClient;
    commandClient.Test();

    std::cout << "\n********************适配器/包装器模式，很有用但是一直忽视的模式************************" << std::endl;
    AdapterTest adapterTest;
    adapterTest.StartPlay();

    std::cout << "\n********************门面模式，最容易在代码出现的一种模式************************" << std::endl;
    Facade facade;
    facade.WatchTV();
    facade.CloseTV();

    std::cout << "\n********************模板模式，自己最喜欢的去重复代码的模式************************" << std::endl;
    TemplateTest templateTest;
    templateTest.Test();


    std::cout << "\n********************迭代器模式，封装遍历行为************************" << std::endl;
    Waiter waiter;
    waiter.PrintAllMenu2();

    std::cout << "\n********************组合模式，单一职责换取透明性************************" << std::endl;
    ComponentTest componentTest;
    componentTest.Test();

    std::cout << "\n********************远程代理，多进程通信的必备模式************************" << std::endl;
    RemoteProxyTest remoteProxyTest;
    remoteProxyTest.Test();

    std::cout << "\n********************虚拟代理，降低资源消耗的工具************************" << std::endl;
    VirtualProxyTest virtualProxyTest;
    virtualProxyTest.Test();

    getchar();
	return 0;
}

