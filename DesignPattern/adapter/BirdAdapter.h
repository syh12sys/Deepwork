#pragma once

#include "Bird.h"

#include <memory>

class Chicken;

// �ӿ�ת������ת����Ҳ��ͬһ�Ƶ����ƶ��ת���Ĺ��̿��ܲ��Ǽ򵥵ĺ������ã���Ҫ����һЩŬ����
// Ҳ���Գ�Ϊ��װ��ģʽ��ʵ�ʱ����кܶ������ƣ�ֻ��û��ʹ�ü̳а��ˡ�
class BirdAdapter : public Bird
{
public:
    BirdAdapter() = default;
    ~BirdAdapter() = default;

    void Fly() override;

    void Chirp() override;

    void SetChicken(const std::shared_ptr<Chicken>& chicken);

private:

    std::shared_ptr<Chicken> m_chicken;
};