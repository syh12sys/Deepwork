#ifndef _LemonCoffee_h_
#define _LemonCoffee_h_

#include "CoffeeDecroter.h"

// �����ʵĿ���
class LemonCoffee : public CoffeeDecroter
{
public:
    LemonCoffee() = default;
    ~LemonCoffee() = default;

public:
    // �۸�
    int Cost() override;

    // ��������
    void Descripte() override;
};

#endif