#include "stdafx.h"
#include "DublePrime.h"

#include <iostream>

bool hasCirle(MyList<int>* myList)
{
    // ����������
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

   std::cout << "\n-----------------˫ָ�������λ��---------------------------";

   auto medianNum = findMedianNum(myList);
   if (medianNum)
   {
       std::cout << "\n��λ��=" << medianNum->data;
   }

   std::cout << "\n-----------------���ҵ�����4����---------------------------\n";
   auto lastKNum = findLastKNum(myList, 4);
   if (lastKNum)
   {
       std::cout << "\n������4����=" << medianNum->data;
   }

   std::cout << "\n-----------------�ж��������Ƿ���ڻ�---------------------------\n";
   auto findResult = FindMyList(myList, 7);
   findResult->next = myList;
   std::cout << "\n�����Ƿ���ڻ�=" << hasCirle(myList);

   findResult->next = nullptr;
   DestroyMyList(myList);
}