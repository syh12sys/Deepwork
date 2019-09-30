#pragma once

#include "Icon.h"

#include <memory>

// 虚拟代理是编程中惯用方法的总结提炼，
// 实际效果可以降低系统资源消耗，当然有赖于对虚拟的精心设计
class IconProxy : public Icon
{
public:
    IconProxy() = default;
    ~IconProxy() = default;

    uint32_t GetWidth() override;

    uint32_t GetHeight() override;

    void Display() override;

private:
    std::shared_ptr<Icon> m_icon;
};