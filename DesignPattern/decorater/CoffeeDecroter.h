#ifndef _CoffeeDecroter_h_
#define _CoffeeDecroter_h_

#include "Coffee.h"

// ��̬��Ϊcoffee����ְ��
// ѡ��ʱ������ְ��ְ����ԭʼ�����һ���֣�������Ҫ��ʱ��Ŷ�̬��Ͻ���������Ҫ��ʱ���û��
// ����ְ��Ķ�̬��װ
class CoffeeDecroter : public Coffee
{
public:
    CoffeeDecroter();
    ~CoffeeDecroter() = default;

public:
    void SetCoffer(Coffee* coffee);

    // �۸�
    int Cost() override;

    // ��������
    void Descripte() override;

private:
    Coffee* m_coffer;
};

#endif