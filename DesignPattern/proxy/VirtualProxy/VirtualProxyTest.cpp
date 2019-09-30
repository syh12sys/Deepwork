#include "stdafx.h"
#include "VirtualProxyTest.h"
#include "IconProxy.h"
#include "IconEntry.h"

#include <iostream>
#include <memory>

void VirtualProxyTest::Test()
{
    std::shared_ptr<IconProxy> iconProxy(new IconProxy);

    std::cout << "ͼƬ�߶ȣ�" << iconProxy->GetHeight() << std::endl;
    std::cout << "ͼƬ��ȣ�" << iconProxy->GetHeight() << std::endl;
    iconProxy->Display();
}