#include "stdafx.h"
#include "CoffeeShop.h"

#include <memory>

#include "OriginalCoffee.h"
#include "SugarCoffee.h"
#include "LemonCoffee.h"

void CoffeeShop::Sell()
{
    std::shared_ptr<Coffee> originalCoffer(new OriginalCoffee);
    originalCoffer->Descripte();

    std::shared_ptr<SugarCoffee> sugarCoffee(new SugarCoffee);
    sugarCoffee->SetCoffer(originalCoffer.get());
    sugarCoffee->Descripte();

    std::shared_ptr<LemonCoffee> lemonCoffee(new LemonCoffee);
    lemonCoffee->SetCoffer(sugarCoffee.get());
    lemonCoffee->Descripte();

}