#include "stdafx.h"
#include "LazySingleton.h"

#include <iostream>

LazySingleton* LazySingleton::m_singleton = nullptr;

std::mutex LazySingleton::m_singletonMutex;

LazySingleton* LazySingleton::GetInstance()
{
    std::cout << "������������ģʽ��ֻ������Ҫ��ʱ��Ŵ������󣬿ɼ����ڴ�ռ��" << std::endl;
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