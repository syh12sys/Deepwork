#include "stdafx.h"
#include "Singleton.h"

#include <iostream>

Singleton* Singleton::m_singleton = new Singleton;

Singleton* Singleton::GetInstance()
{
    std::cout << "我是全局静态变量，我不怕多线程访问" << std::endl;
    return m_singleton;
}