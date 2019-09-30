#include "stdafx.h"
#include "IconProxy.h"
#include "IconEntry.h"

#include <iostream>
#include <windows.h>

uint32_t IconProxy::GetWidth()
{
    if (m_icon)
    {
        return m_icon->GetWidth();
    }
    else
    {
        return 800;
    }
}

uint32_t IconProxy::GetHeight()
{
    if (m_icon)
    {
        return m_icon->GetHeight();
    }
    else
    {
        return 600;
    }
}

void IconProxy::Display()
{
    if (m_icon)
    {
        m_icon->Display();
    }
    else
    {
        std::cout << "���Ǵ����ҿ������ⳤ�Ϳ�����ԣ�����û������չʾ�Ĺ��̣�����Ҫ����������ͼƬ��\n";
        int loopCount = 10;
        while (loopCount-- > 0)
        {
            std::cout << "������.........\n";
            Sleep(100);
        }
        std::cout << "������ɣ��Ժ���������iconչʾ��\n";

        m_icon.reset(new IconEntry);
        m_icon->Display();
    }
}