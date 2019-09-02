#ifndef _Duck_h_
#define _Duck_h_

#include <memory>

#include "DuckFly.h"

// ԭ�����������в�ͬ����Ϊ��������µļ̳в����
// ���벻ͬ����ı仯������ʱ���Զ�̬���ñ仯����
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