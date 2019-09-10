#include "stdafx.h"
#include "Waiter.h"

#include "BreakfastMenu.h"
#include "LunchMenu.h"

#include "Iterate.h"

#include <iostream>

void Waiter::PrintAllMenu()
{
    //std::cout << "��Ͳ˵�:\n";
    //BreakfastMenu breakfast;
    //MenuItem* breakfastMenuItem = breakfast.GetItem();
    //for (int i = 0; i < BreakfastMenu::kMaxItem; ++i)
    //{
    //    std::cout << (breakfastMenuItem + i)->GetName() << std::endl;
    //}

    //std::cout << "\n��Ͳ˵�:\n";
    //LunchMenu lunch;
    //auto& lunchMenu = lunch.GetItems();
    //for (const auto item : lunchMenu)
    //{
    //    std::cout << item->GetName() << std::endl;
    //}
}

void Waiter::PrintAllMenu2()
{
    std::cout << "��Ͳ˵�:\n";
    BreakfastMenu breakfast;
    Traversal(breakfast.CreateIterate());

    std::cout << "\n��Ͳ˵�:\n";
    LunchMenu lunch;
    Traversal(lunch.CreateIterate());
}

void Waiter::Traversal(std::shared_ptr<Iterate> iterate)
{
    while (iterate->HasNext())
    {
        std::cout << iterate->Next()->GetName() << "\n";
    }
}