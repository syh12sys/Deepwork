#include "stdafx.h"
#include "ComponentTest.h"

#include "ConcreteMenuItem.h"
#include "Menu.h"

void ComponentTest::Test()
{
    MenuComponent* menuComponent = new Menu;

    menuComponent->Add(new ConcreteMenuItem);
    menuComponent->Add(new ConcreteMenuItem);
    menuComponent->Add(new ConcreteMenuItem);

    menuComponent->Add(new Menu);

    menuComponent->Display();
}