#include "stdafx.h"
#include "VirtualProxyTest.h"
#include "IconProxy.h"
#include "IconEntry.h"

#include <iostream>
#include <memory>

void VirtualProxyTest::Test()
{
    std::shared_ptr<IconProxy> iconProxy(new IconProxy);

    std::cout << "Í¼Æ¬¸ß¶È£º" << iconProxy->GetHeight() << std::endl;
    std::cout << "Í¼Æ¬¿í¶È£º" << iconProxy->GetHeight() << std::endl;
    iconProxy->Display();
}