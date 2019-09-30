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
        std::cout << "我是代理，我可以虚拟长和宽的属性，但是没法虚拟展示的过程，我需要下载真正的图片了\n";
        int loopCount = 10;
        while (loopCount-- > 0)
        {
            std::cout << "下载中.........\n";
            Sleep(100);
        }
        std::cout << "下载完成，以后都是真正的icon展示了\n";

        m_icon.reset(new IconEntry);
        m_icon->Display();
    }
}