#ifndef _Coffee_h_
#define _Coffee_h_

class Coffee
{
public:
    Coffee() = default;
    virtual ~Coffee() = default;

public:
    // �۸�
    virtual int Cost() = 0;

    // ��������
    virtual void Descripte() = 0;
};

#endif