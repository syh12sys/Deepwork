#include "stdafx.h"
#include "LazySingleton.h"

#include <iostream>

LazySingleton* LazySingleton::m_singleton = nullptr;

std::mutex LazySingleton::m_singletonMutex;

LazySingleton* LazySingleton::GetInstance()
{
    std::cout << "我是懒汉单例模式，只有在需要的时候才创建对象，可减少内存占用" << std::endl;
    if (m_singleton == nullptr)
    {
        std::lock_guard<std::mutex> lck(m_singletonMutex);
        if (m_singleton == nullptr)
        {
            m_singleton = new LazySingleton;
        }
    }
    return m_singleton;
}