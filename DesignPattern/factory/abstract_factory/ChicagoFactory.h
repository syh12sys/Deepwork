#pragma once

#include "AbstractFactory.h"

class ChicagoFactory : public AbstractFactory
{
public:
    ChicagoFactory() = default;
    ~ChicagoFactory() = default;

public:
    std::shared_ptr<RawMaterial> CreateSauce() override;

    std::shared_ptr<RawMaterial> CreateShrimps() override;
};