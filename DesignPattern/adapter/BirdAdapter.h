#pragma once

#include "Bird.h"

#include <memory>

class Chicken;

// 接口转换，能转换的也是同一科的相似动物，转换的过程可能不是简单的函数调用，需要做出一些努力。
// 也可以称为包装器模式，实际编码中很多此种设计，只是没有使用继承罢了。
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