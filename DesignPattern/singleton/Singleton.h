#pragma once

// 使用全局变量或类静态变量，由运行时库负责初始化变量，可避免多线程访问的问题
// 缺点是没有按需创建
class Singleton
{
public:
    Singleton() = default;
    ~Singleton() = default;

    static Singleton* GetInstance();

private:
    static Singleton* m_singleton;
};