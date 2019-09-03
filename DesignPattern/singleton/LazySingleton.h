#pragma once

#include <mutex>

// 懒汉单例可实现按需创建，但是实现起来稍微有些麻烦，一般情况下其带来的麻烦比起带来的好处大
// 麻烦一：使用锁保护对象的创建过程，然而单例函数调用很频繁，锁会极大的降低性能
// 麻烦二：为了解决麻烦一，再次进行判空处理
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