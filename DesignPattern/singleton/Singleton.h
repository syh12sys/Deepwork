#pragma once

// ʹ��ȫ�ֱ������ྲ̬������������ʱ�⸺���ʼ���������ɱ�����̷߳��ʵ�����
// ȱ����û�а��贴��
class Singleton
{
public:
    Singleton() = default;
    ~Singleton() = default;

    static Singleton* GetInstance();

private:
    static Singleton* m_singleton;
};