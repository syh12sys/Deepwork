#include "stdafx.h"
#include "DublePrime.h"

#include <iostream>

bool hasCirle(MyList<int>* myList)
{
    // 链表迭代框架
    //auto iter = myList;
    //while (iter != nullptr)
    //{
    //    iter = iter->next;
    //}

    auto slow = myList;
    auto fast = myList;
    while (slow != nullptr && fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

MyList<int>* findMedianNum(MyList<int>* myList)
{
    auto slow = myList;
    auto fast = myList;
    while (slow != nullptr && fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

MyList<int>* findLastKNum(MyList<int>* myList, int k)
{
    auto slow = myList;
    auto fast = myList;

    while (k >= 0 && fast)
    {
        fast = fast->next;
        --k;
    }
    if (k > 0)
    {
        return nullptr;
    }

    while (slow != nullptr && fast != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

void TestDulePrime()
{
   MyList<int>* myList = CreateMyList<int>();
   myList->data = 1;
   AddMyList(myList, 2);
   AddMyList(myList, 3);
   AddMyList(myList, 4);
   AddMyList(myList, 5);
   AddMyList(myList, 6);
   AddMyList(myList, 7);

   std::cout << "\n-----------------双指针查找中位数---------------------------";

   auto medianNum = findMedianNum(myList);
   if (medianNum)
   {
       std::cout << "\n中位数=" << medianNum->data;
   }

   std::cout << "\n-----------------查找倒数第4个数---------------------------\n";
   auto lastKNum = findLastKNum(myList, 4);
   if (lastKNum)
   {
       std::cout << "\n倒数第4个数=" << medianNum->data;
   }

   std::cout << "\n-----------------判断链表中是否存在环---------------------------\n";
   auto findResult = FindMyList(myList, 7);
   findResult->next = myList;
   std::cout << "\n链表是否存在环=" << hasCirle(myList);

   findResult->next = nullptr;
   DestroyMyList(myList);
}