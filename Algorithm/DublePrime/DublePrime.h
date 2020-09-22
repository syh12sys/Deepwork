#pragma once

#include "../DataStructure/MyList.h"

// 双指针操作链表，又叫快慢指针，是链表算法一种简单的技巧
// 思路：根据快慢指针走的步调，可以得有一些规律，例如快走两步，慢走一步

// 判断链表是否存在换装结构
// 思路：快指针走两步，慢指针走一步，如果存在环状结构，那么最终快指针会追上慢指针
bool hasCirle(MyList<int>* myList);

// 查找中位数
// 思路：快指针走两步，慢指针走一步，快指针结束的时候，慢指针指向链表的中间
MyList<int>* findMedianNum(MyList<int>* myList);


// 查找倒数第k个数
MyList<int>* findLastKNum(MyList<int>* myList, int k);


void TestDulePrime();