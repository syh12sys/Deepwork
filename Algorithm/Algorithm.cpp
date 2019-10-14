// Algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Search/Search.h"

#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
    std::vector<int> data{4, 3, 7, 6, 8, 5, 10};
    bool search_result = SequenceSearch(data, 5);
    std::cout << "顺序查找算法，是否找到5 " << search_result << "\n";
    
    data = {3, 4, 5, 6, 7, 8, 10};
    search_result = BinarySearch(data, 5);
    std::cout << "二分查找算法，是否找到5 " << search_result << "\n";

    getchar();
	return 0;
}

