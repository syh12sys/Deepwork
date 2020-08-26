#include "stdafx.h"
#include "Search.h"

#include <stdint.h>

bool SequenceSearch(const std::vector<int>& data, int target)
{
    for (const auto& iter : data)
    {
        if (iter == target)
        {
            return true;
        }
    }
    return false;
}

bool BinarySearch(const std::vector<int>& data, int target, int& search_cout)
{
    if (data.empty())
    {
        return false;
    }

    uint32_t low = 0;
    uint32_t high = data.size() - 1;
    while (low <= high)
    {
        search_cout = search_cout + 1;

        uint32_t middle = low + (high - low) / 2;
        if (data[middle] == target)
        {
            return true;
        }
        else if (data[middle] > target)
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }
    return false;
}

bool BinarySearchRecursive(const std::vector<int>& data, int low, int high, int target)
{
    if (low > high)
    {
        return false;
    }
    int middle = low + (high - low) / 2;
    if (data[middle] > target)
    {
       return BinarySearchRecursive(data, low, middle - 1, target);
    }
    else if (data[middle] < target)
    {
       return BinarySearchRecursive(data, low + 1, high, target);
    }
    else
    {
        return true;
    }
}