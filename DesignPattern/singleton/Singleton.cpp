#include "stdafx.h"
#include "Singleton.h"

#include <iostream>

Singleton* Singleton::m_singleton = new Singleton;

Singleton* Singleton::GetInstance()
{
    std::cout << "����ȫ�־�̬�������Ҳ��¶��̷߳���" << std::endl;
    return m_singleton;
}