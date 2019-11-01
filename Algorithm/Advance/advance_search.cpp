#include "stdafx.h"
#include "advance_search.h"

#include "../Search/Search.h"

bool SearchInSortedMatrix(int matrix[3][4], int target, int& search_cout)
{
    for (int i = 0; i < 4; ++i)
    {
        if (BinarySearch(std::vector<int>(*(matrix + i), *(matrix + i) + 4), target, search_cout))
        {
            return true;
        }
    }
    return false;
}

bool SearchInSortedMatrix2(int matrix[3][4], int target, int& search_cout)
{
    int i = 0;
    int j = 3;
    while (i < 3 && j >=0)
    {
        search_cout++;

        if (matrix[i][j] == target)
        {
            return true;
        }
        else if (matrix[i][j] > target)
        {
            --j;
        }
        else
        {
            ++i;
        }
    }
    return false;
}

bool SearchInSortedMatrix3(int matrix[3][4], int target, int& search_cout)
{
    int i = 0;
    while (i < 3)
    {
        if (matrix[i][3] == target)
        {
            search_cout++;
            return true;
        }
        else if (matrix[i][3] > target)
        {
            if (BinarySearch(std::vector<int>(*(matrix + i), *(matrix + i) + 4), target, search_cout))
            {
                return true;
            }
            else
            {
                search_cout++;
                ++i;
            }
        }
        else
        {
            search_cout++;
            ++i;
        }
    }
    return false;
}