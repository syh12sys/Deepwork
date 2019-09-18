#pragma once

#include <stdint.h>

// 表示整体与部分的树形结构，调用者透明的使用整体与部分
// 组合模式是单一职责与透明性权衡的结果，为了透明性适当的丢掉单一职责
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