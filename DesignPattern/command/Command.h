#pragma once

// ����ģʽ�����������ߺ�ִ���ߣ�ʹ�첽ִ���Ŷӳ�Ϊ����
class Command
{
public:
    Command() = default;
    virtual ~Command() = default;

    virtual void Excute() = 0;
};