#include "stdafx.h"
#include "templateTest.h"

#include "NewSanQi.h"
#include "NewTea.h"

#include <iostream>
#include <memory>

void TemplateTest::Test()
{
    std::shared_ptr<Drink> newSanQi(new NewSanQi);
    newSanQi->BoilWater();
    newSanQi->Brew();
    newSanQi->PourCup();
    newSanQi->AddSeasoning();

    std::cout << "\n";

    std::shared_ptr<Drink> newTea(new NewTea);
    newTea->BoilWater();
    newTea->Brew();
    newTea->PourCup();
    newTea->AddSeasoning();
}