#include "stdafx.h"
#include "AdapterTest.h"
#include "ConcreteBird.h"
#include "ConcreteChicken.h"
#include "BirdAdapter.h"

#include <memory>
#include <iostream>

void AdapterTest::StartPlay()
{
    std::shared_ptr<Bird> bird(new ConcreteBird);
    bird->Fly();
    bird->Chirp();
    std::cout << std::endl;

    std::shared_ptr<Chicken> chicken(new ConcreteChicken);
    chicken->Fly();
    chicken->Crow();
    std::cout << std::endl;

    std::shared_ptr<BirdAdapter> birdAdapter(new BirdAdapter);
    birdAdapter->SetChicken(chicken);
    birdAdapter->Fly();
    birdAdapter->Chirp();
}
