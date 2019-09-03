#pragma once

#include <mutex>

// ����������ʵ�ְ��贴��������ʵ��������΢��Щ�鷳��һ���������������鷳��������ĺô���
// �鷳һ��ʹ������������Ĵ������̣�Ȼ�������������ú�Ƶ�������Ἣ��Ľ�������
// �鷳����Ϊ�˽���鷳һ���ٴν����пմ���
class LazySingleton
{
public:
    LazySingleton() = default;
    ~LazySingleton() = default;

    static LazySingleton* GetInstance();

private:
    static LazySingleton* m_singleton;

    static std::mutex m_singletonMutex;
};