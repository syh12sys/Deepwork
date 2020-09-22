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
    std::cout << "-----------------˳������㷨������ͨ��Ч�Ĳ����㷨-------------------------------" << std::endl;
    std::vector<int> data{4, 3, 7, 6, 8, 5, 10};
    bool search_result = SequenceSearch(data, 5);
    std::cout << "˳������㷨���Ƿ��ҵ�5 " << search_result << "\n";
    
    std::cout << "-----------------���ֲ����㷨�����Ч�����ʵ�����㷨-------------------------------" << std::endl;
    data = {3, 4, 5, 6, 7, 8, 10};
    int search_cout = 0;
    search_result = BinarySearch(data, 5, search_cout);
    std::cout << "���ֲ����㷨���Ƿ��ҵ�5 " << search_result << "\t ���Ҵ�����" << search_cout << "\n";

    std::cout << "-----------------�������������ʡ�Ƚϴ���-------------------------------" << std::endl;
    data = { 3, 8, 5, 7, 6, 8, 10 };
    std::cout << "ԭʼ���ݣ�";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }
    InsertSort(data);
    std::cout << "\n�������ݣ�";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }

    std::cout << "\n-----------------ѡ������ÿ��ѡ����С������������ٽ���-------------------------------" << std::endl;
    data = { 3, 8, 5, 7, 6, 8, 10 };
    std::cout << "ԭʼ���ݣ�";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }
    SelectSort(data);
    std::cout << "\n�������ݣ�";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }

    std::cout << "\n-----------------ð������ÿ�ν������ڵ���������-------------------------------" << std::endl;
    data = { 3, 8, 5, 7, 6, 8, 10 };
    std::cout << "ԭʼ���ݣ�";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }
    BubbleSort(data);
    std::cout << "\n�������ݣ�";
    for (const auto& i : data)
    {
        std::cout << i << "\t";
    }

    std::cout << "\n-----------------���������ڿ�����+����-------------------------------" << std::endl;
    data = { 7, 8, 5, 3, 6, 8, 10 };
    std::cout << "����ǰ��";
    std::for_each(data.begin(), data.end(), [](int i) { std::cout << i << "\t"; });

    QuickSort(data, 0, data.size() - 1);

    std::cout << "\n�����";
    std::for_each(data.begin(), data.end(), [](int i) { std::cout << i << "\t"; });

    std::cout << "\n-----------------�������飬���������Ŀ�ʼ-------------------------------" << std::endl;
    int sortedMatrix[3][4] = { { 2, 3, 4, 5 }, { 6, 7, 8, 9 }, { 10, 11, 12, 13 } };
    std::cout << "ԭʼ����\n";
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
    std::cout <<"���ֲ���" << target << (search_result ? "�ҵ�" : "û�ҵ�") << "\t���Ҵ�����" << search_cout << "\n";

    search_cout = 0;
    search_result = SearchInSortedMatrix2(sortedMatrix, target, search_cout);
    std::cout << "���Ͻ�" << target << (search_result ? "�ҵ�" : "û�ҵ�") << "\t���Ҵ�����" << search_cout << "\n";

    search_cout = 0;
    search_result = SearchInSortedMatrix3(sortedMatrix, target, search_cout);
    std::cout << "���Ͻ�+���ֲ���" << target << (search_result ? "�ҵ�" : "û�ҵ�") << "\t���Ҵ�����" << search_cout << "\n";

    std::cout << "\n-----------------�ַ����еĿո��滻Ϊ%20-------------------------------" << std::endl;
    char oldText[] = { " how are  you"};
    int newLen = 0;
    ReplaceStringSpace(oldText, strlen(oldText), nullptr, &newLen);
    newLen += 1;
    char* newTextBuf = new char[newLen];
    memset(newTextBuf, 0, newLen);
    ReplaceStringSpace(oldText, strlen(oldText), newTextBuf, &newLen);
    delete[] newTextBuf;

    std::cout << "\n-----------------ǰ���������������ؽ�������-------------------------------" << std::endl;
    std::vector<int> pre{7, 8, 12, 9, 14, 15};
    std::vector<int> inorder{8, 12, 7, 14, 15, 9};
    BiTree* root = RecreateTree(pre, inorder);
    TraverseBitree(root);

    std::cout << "\n-----------------����ջģ����У������Ƚ����ģ���Ƚ��ȳ�������------------------" << std::endl;
    std::cout << "���룺 1, 2, 3, 4\n";
    TwoStackSimulateQueue twoStackSimulateQueue;
    twoStackSimulateQueue.Push(1);
    twoStackSimulateQueue.Push(2);
    twoStackSimulateQueue.Push(3);
    twoStackSimulateQueue.Push(4);

    std::cout << "˫ջģ���������ݣ� ";
    std::cout << twoStackSimulateQueue.Pop() << "\t";
    std::cout << twoStackSimulateQueue.Pop() << "\t";
    std::cout << twoStackSimulateQueue.Pop() << "\t";
    std::cout << twoStackSimulateQueue.Pop() << "\t";

    // ˫ָ��
    TestDulePrime();

    // ˫����
    TestDubleIndex();

    getchar();
	return 0;
}

