#pragma once

class MenuItem;

// ��װ�ۺ϶���ı�����Ϊ���ѱ����ӱ�����ժ����Ҳ���ϵ�һְ��ԭ��
class Iterate
{
public:
    virtual ~Iterate() = default;

public:
    virtual bool HasNext() = 0;

    virtual MenuItem* Next() = 0;
};