#pragma once

#include "GumballMonitor.h"

// Զ�̴����ǽ���ͨ�ŵıر�ģʽ�������㻹û����ʶ���Լ��Ѿ���������
// ��Chromeʵ������������һ�㲻�û������Լ��proxy��stub����Ϊ�������ܲ�������Ķ��������̺��ӽ��̶����������
class GumballMonitorProxy : public GumballMonitor
{
public:
    GumballMonitorProxy();
    ~GumballMonitorProxy() = default;

public:
    uint32_t GetStatus() override;
};