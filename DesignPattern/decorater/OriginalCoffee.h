#ifndef _OriginalCoffee_h_
#define _OriginalCoffee_h_

#include "CoffeeDecroter.h"

// ԭζ����
class OriginalCoffee : public CoffeeDecroter
{
public:
    OriginalCoffee() = default;
    ~OriginalCoffee() = default;

public:
    // �۸�
    int Cost() override;

    // ��������
    void Descripte() override;
};

#endif