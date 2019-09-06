#include "stdafx.h"
#include "facade.h"
#include "TV.h"
#include "VCD.h"
#include "Screen.h"

#include <iostream>

void Facade::WatchTV()
{
    std::cout << "�ҷ�װ�����п����ӵĶ���\n";

    Screen sreen;
    sreen.Open();

    TV tv;
    tv.Open();

    VCD vcd;
    vcd.Open();
}

void Facade::CloseTV()
{
    std::cout << "�ҷ�װ�����йرյ��ӵĶ���\n";
    Screen sreen;
    sreen.Close();

    TV tv;
    tv.Close();

    VCD vcd;
    vcd.Close();
}