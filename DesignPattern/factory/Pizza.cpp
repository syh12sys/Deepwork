#include "stdafx.h"
#include "Pizza.h"

#include <iostream>

void Pizza::Prepare()
{
    std::cout << "��ʼ׼��[" << m_name << "]���ǡ���۵ȸ��ֵ���" << std::endl;
}

void Pizza::Bake()
{
    std::cout << "��ʼ�濾" << std::endl;
}

void Pizza::Cute()
{
    std::cout << "�����õĴ������г�С��" << std::endl;
}

void Pizza::Box()
{
    std::cout << "��С���뱬װ��" << std::endl;
}
