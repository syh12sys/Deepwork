#include "stdafx.h"
#include "ChicagoFactory.h"

#include "ChicagoSauce.h"
#include "ChicagoShrimps.h"

std::shared_ptr<RawMaterial> ChicagoFactory::CreateSauce()
{
    return std::shared_ptr<RawMaterial>(new ChicagoSauce);
}

std::shared_ptr<RawMaterial> ChicagoFactory::CreateShrimps()
{
    return std::shared_ptr<RawMaterial>(new ChicagoShrimps);
}