#include "stdafx.h"
#include "Sort.h"

void InsertSort(std::vector<int>& pendingSortData)
{
    for (size_t i = 1; i < pendingSortData.size(); ++i)
    {
        for (size_t j = 0; j < i; ++j)
        {
            if (pendingSortData[i] <= pendingSortData[j])
            {
                int temp = pendingSortData[i];
                pendingSortData[i] = pendingSortData[j];
                pendingSortData[j] = temp;
            }
        }
    }
}

void SelectSort(std::vector<int>& pendingSortData)
{
    for (size_t i = 0; i < pendingSortData.size(); ++i)
    {
        int minIndex = i;
        for (size_t j = i + 1; j < pendingSortData.size(); ++j)
        {
            if (pendingSortData[j] < pendingSortData[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = pendingSortData[i];
        pendingSortData[i] = pendingSortData[minIndex];
        pendingSortData[minIndex] = temp;
    }
}

void BubbleSort(std::vector<int>& pendingSortData)
{
    for (size_t i = 0; i < pendingSortData.size(); ++i)
    {
        for (size_t j = 0; j < pendingSortData.size() - 1; ++j)
        {
            if (pendingSortData[j] > pendingSortData[j + 1])
            {
                int temp = pendingSortData[j];
                pendingSortData[j] = pendingSortData[j + 1];
                pendingSortData[j + 1] = temp;
            }
        }
    }
}