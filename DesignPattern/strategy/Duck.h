#ifndef _Duck_h_
#define _Duck_h_

#include <memory>

#include "DuckFly.h"

// 原本各个子类中不同的行为，抽出到新的继承层次中
// 隔离不同子类的变化，运行时可以动态设置变化部分
class Duck
{
public:
    Duck() = default;
    ~Duck() = default;

public:
    void SetDuckFly(std::shared_ptr<DuckFly> duckFly);

    virtual void Fly();

    virtual void Quack();

    virtual void Display() = 0;

public:
    std::shared_ptr<DuckFly> m_duckFly;
};

#endif // _Duck_h_