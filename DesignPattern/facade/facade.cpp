#include "stdafx.h"
#include "facade.h"
#include "TV.h"
#include "VCD.h"
#include "Screen.h"

#include <iostream>

void Facade::WatchTV()
{
    std::cout << "我封装了所有看电视的动作\n";

    Screen sreen;
    sreen.Open();

    TV tv;
    tv.Open();

    VCD vcd;
    vcd.Open();
}

void Facade::CloseTV()
{
    std::cout << "我封装了所有关闭电视的动作\n";
    Screen sreen;
    sreen.Close();

    TV tv;
    tv.Close();

    VCD vcd;
    vcd.Close();
}