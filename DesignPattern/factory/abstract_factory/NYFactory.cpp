#include "stdafx.h"
#include "NYFactory.h"

#include "NYSauce.h"
#include "NYShrimps.h"

std::shared_ptr<RawMaterial> NYFactory::CreateSauce()
{
    return std::shared_ptr<RawMaterial>(new NYSauce());
}

std::shared_ptr<RawMaterial> NYFactory::CreateShrimps()
{
    return std::shared_ptr<RawMaterial>(new NYShrimps());
}