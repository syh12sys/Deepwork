#ifndef _SugarCoffee_h_
#define _SugarCoffee_h_

#include "CoffeeDecroter.h"

// ���ǿ���
class SugarCoffee : public CoffeeDecroter
{
public:
    SugarCoffee() = default;
    ~SugarCoffee() = default;

public:
    // �۸�
    int Cost() override;

    // ��������
    void Descripte() override;
};

#endif