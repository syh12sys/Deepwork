#pragma once

#include <stdint.h>

// ��ʾ�����벿�ֵ����νṹ��������͸����ʹ�������벿��
// ���ģʽ�ǵ�һְ����͸����Ȩ��Ľ����Ϊ��͸�����ʵ��Ķ�����һְ��
class MenuComponent
{
public:
    MenuComponent() = default;
    ~MenuComponent() = default;

    virtual void Display();

    virtual void Add(MenuComponent* menuComponent) {}

    virtual void Remove(MenuComponent* menuComponent) {}

    virtual MenuComponent* GetAt(uint32_t i) { return nullptr; }

    virtual uint32_t Count() { return 0; }
};