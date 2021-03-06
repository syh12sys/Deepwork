#pragma once

#include <memory>

class RawMaterial;

// 解决分体系产品的创建
class AbstractFactory
{
public:
    virtual ~AbstractFactory() = default;

public:
    // 创建腊味原料
    virtual std::shared_ptr<RawMaterial> CreateSauce() = 0;

    // 创建虾仁原料
    virtual std::shared_ptr<RawMaterial> CreateShrimps() = 0;
}; 