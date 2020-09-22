#include "stdafx.h"
#include "DubleIndex.h"

#include <algorithm>
#include <iostream>

void ReverserArray(MyArray<int>* myArray)
{
    int low = 0;
    int high = myArray->used - 1;
    while (low < high)
    {
        int temp = myArray->base[low];
        myArray->base[low] = myArray->base[high];
        myArray->base[high] = temp;

        ++low;
        --high;
    }
}

void TestDubleIndex()
{
    MyArray<int>* myArray = CreateMyArray<int>(10);
    AddMyArray(myArray, 1);
    AddMyArray(myArray, 2);
    AddMyArray(myArray, 3);
    AddMyArray(myArray, 4);
    AddMyArray(myArray, 5);
    AddMyArray(myArray, 6);

    std::cout << "\n**********************双索引翻转数组********************************\n";
    std::cout << "翻转前: ";
    std::for_each(myArray->base, myArray->base + myArray->used, [](int num) {std::cout << num << "\t"; });

    ReverserArray(myArray);

    std::cout << "\n翻转后: ";
    std::for_each(myArray->base, myArray->base + myArray->used, [](int num) {std::cout << num << "\t"; });

    DestroyMyArray(myArray);
}