#pragma once

#include "AbstractFactory.h"

class NYFactory : public AbstractFactory
{
public:
    NYFactory() = default;
    ~NYFactory() = default;

    std::shared_ptr<RawMaterial> CreateSauce() override;

    std::shared_ptr<RawMaterial> CreateShrimps() override;
};