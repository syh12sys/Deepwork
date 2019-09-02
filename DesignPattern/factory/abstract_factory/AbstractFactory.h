#pragma once

#include <memory>

class RawMaterial;

class AbstractFactory
{
public:
    virtual ~AbstractFactory() = default;

public:
    // ������ζԭ��
    virtual std::shared_ptr<RawMaterial> CreateSauce() = 0;

    // ����Ϻ��ԭ��
    virtual std::shared_ptr<RawMaterial> CreateShrimps() = 0;
}; 