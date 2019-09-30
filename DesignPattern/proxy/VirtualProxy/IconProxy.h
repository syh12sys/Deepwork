#pragma once

#include "Icon.h"

#include <memory>

// ��������Ǳ���й��÷������ܽ�������
// ʵ��Ч�����Խ���ϵͳ��Դ���ģ���Ȼ�����ڶ�����ľ������
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