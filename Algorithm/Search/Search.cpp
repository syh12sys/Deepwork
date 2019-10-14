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

bool BinarySearch(const std::vector<int>& data, int target)
{
    if (data.empty())
    {
        return false;
    }

    uint32_t low = 0;
    uint32_t high = data.size() - 1;
    while (low <= high)
    {
        uint32_t middle = low + (high - low) / 2;
        if (data[middle] > target)
        {
            high = middle - 1;
        }
        else if (data[middle] < target)
        {
            low = middle + 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}