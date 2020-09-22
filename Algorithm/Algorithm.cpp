// Algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Search/Search.h"

#include "Sort/Sort.h"

#include "Advance/advance_search.h"

#include "Advance/string_algorithm.h"

#include "Advance/tree_algorithm.h"
#include "Advance/stack_queue_algorithm.h"

#include "DublePrime/DublePrime.h"
#include "DublePrime/DubleIndex.h"

#include <iostream>
#include <algorithm>

int _tmain(int argc, _TCHAR* argv[])
{
    std::cout << "-----------------顺序查找算法，最普通有效的查找算法-------------------------------" << std::endl;
    std::vector<int> data{4, 3, 7, 6, 8, 5, 10};
    bool search_result = SequenceSearch(data, 5);
    std::cout << "顺序查找算法，是否找到5 " << search_result << "\n";
    
    std::cout << "-----------------二分查找算法，最高效和最具实践的算法-------------------------------" << std::endl;
    data = {3, 4, 5, 6, 7, 8, 10};
    int search_cout = 0;
    search_result = BinarySearch(data, 5, search_cout);
    std::cout << "二分查找算法，是否找到5 " << search_result << "\t 查找次数：" << search_cout << "\n";

    std::cout << "-----------------插入排序，有序节省比较次数-------------------------------" << std::endl;
    data = { 3, 8, 5, 7, 6, 8, 10 };
    std::cout << "原始数据：";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }
    InsertSort(data);
    std::cout << "\n有序数据：";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }

    std::cout << "\n-----------------选择排序，每次选择最小的索引，最后再交换-------------------------------" << std::endl;
    data = { 3, 8, 5, 7, 6, 8, 10 };
    std::cout << "原始数据：";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }
    SelectSort(data);
    std::cout << "\n有序数据：";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }

    std::cout << "\n-----------------冒泡排序，每次交换相邻的两个数据-------------------------------" << std::endl;
    data = { 3, 8, 5, 7, 6, 8, 10 };
    std::cout << "原始数据：";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }
    BubbleSort(data);
    std::cout << "\n有序数据：";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }

    std::cout << "\n-----------------快速排序，挖坑填数+分治-------------------------------" << std::endl;
    data = { 7, 8, 5, 3, 6, 8, 10 };
    std::cout << "排序前：";
    std::for_each(data.begin(), data.end(), [](int i) { std::cout << i << "\t"; });

    QuickSort(data, 0, data.size() - 1);

    std::cout << "\n排序后：";
    std::for_each(data.begin(), data.end(), [](int i) { std::cout << i << "\t"; });

    std::cout << "\n-----------------有序数组，考验智力的开始-------------------------------" << std::endl;
    int sortedMatrix[3][4] = { { 2, 3, 4, 5 }, { 6, 7, 8, 9 }, { 10, 11, 12, 13 } };
    std::cout << "原始数据\n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << sortedMatrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
    int target = 10;
    search_cout = 0;
    search_result = SearchInSortedMatrix(sortedMatrix, target, search_cout);
    std::cout <<"二分查找" << target << (search_result ? "找到" : "没找到") << "\t查找次数：" << search_cout << "\n";

    search_cout = 0;
    search_result = SearchInSortedMatrix2(sortedMatrix, target, search_cout);
    std::cout << "右上角" << target << (search_result ? "找到" : "没找到") << "\t查找次数：" << search_cout << "\n";

    search_cout = 0;
    search_result = SearchInSortedMatrix3(sortedMatrix, target, search_cout);
    std::cout << "右上角+二分查找" << target << (search_result ? "找到" : "没找到") << "\t查找次数：" << search_cout << "\n";

    std::cout << "\n-----------------字符串中的空格替换为%20-------------------------------" << std::endl;
    char oldText[] = { " how are  you"};
    int newLen = 0;
    ReplaceStringSpace(oldText, strlen(oldText), nullptr, &newLen);
    newLen += 1;
    char* newTextBuf = new char[newLen];
    memset(newTextBuf, 0, newLen);
    ReplaceStringSpace(oldText, strlen(oldText), newTextBuf, &newLen);
    delete[] newTextBuf;

    std::cout << "\n-----------------前序树和中序树，重建整棵树-------------------------------" << std::endl;
    std::vector<int> pre{7, 8, 12, 9, 14, 15};
    std::vector<int> inorder{8, 12, 7, 14, 15, 9};
    BiTree* root = RecreateTree(pre, inorder);
    TraverseBitree(root);

    std::cout << "\n-----------------两个栈模拟队列，两个先进后出模拟先进先出的例子------------------" << std::endl;
    std::cout << "输入： 1, 2, 3, 4\n";
    TwoStackSimulateQueue twoStackSimulateQueue;
    twoStackSimulateQueue.Push(1);
    twoStackSimulateQueue.Push(2);
    twoStackSimulateQueue.Push(3);
    twoStackSimulateQueue.Push(4);

    std::cout << "双栈模拟器后数据： ";
    std::cout << twoStackSimulateQueue.Pop() << "\t";
    std::cout << twoStackSimulateQueue.Pop() << "\t";
    std::cout << twoStackSimulateQueue.Pop() << "\t";
    std::cout << twoStackSimulateQueue.Pop() << "\t";

    // 双指针
    TestDulePrime();

    // 双索引
    TestDubleIndex();

    getchar();
	return 0;
}

