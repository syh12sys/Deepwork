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
    
    
    // ��̬���ɾ���۲��� 
    subject.RemoveObserver(concreteObserver);
    subject.SetState(2);
    delete concreteObserver;


    std::cout << "\n********************װ��ģʽ************************" << std::endl;
    CoffeeShop coffeeShop;
    coffeeShop.Sell();

    std::cout << "\n********************����ģʽ************************" << std::endl;
    Context context;
    context.Show();

    std::cout << "\n********************����ģʽ************************" << std::endl;
    Client client;
    client.Order();

    std::cout << "\n********************����ģʽ�����ȴ������************************" << std::endl;
    Singleton::GetInstance();
    LazySingleton::GetInstance();

    std::cout << "\n********************����ģʽ����ô����һֱû����ģʽ��ͨ��ʵ���������������************************" << std::endl;
    CommandClient commandClient;
    commandClient.Test();

    std::cout << "\n********************������/��װ��ģʽ�������õ���һֱ���ӵ�ģʽ************************" << std::endl;
    AdapterTest adapterTest;
    adapterTest.StartPlay();

    std::cout << "\n********************����ģʽ���������ڴ�����ֵ�һ��ģʽ************************" << std::endl;
    Facade facade;
    facade.WatchTV();
    facade.CloseTV();

    std::cout << "\n********************ģ��ģʽ���Լ���ϲ����ȥ�ظ������ģʽ************************" << std::endl;
    TemplateTest templateTest;
    templateTest.Test();


    std::cout << "\n********************������ģʽ����װ������Ϊ************************" << std::endl;
    Waiter waiter;
    waiter.PrintAllMenu2();

    std::cout << "\n********************���ģʽ����һְ��ȡ͸����************************" << std::endl;
    ComponentTest componentTest;
    componentTest.Test();

    std::cout << "\n********************Զ�̴��������ͨ�ŵıر�ģʽ************************" << std::endl;
    RemoteProxyTest remoteProxyTest;
    remoteProxyTest.Test();

    std::cout << "\n********************�������������Դ���ĵĹ���************************" << std::endl;
    VirtualProxyTest virtualProxyTest;
    virtualProxyTest.Test();

    getchar();
	return 0;
}

