#include "stdafx.h"
#include "Sort.h"

void InsertSort(std::vector<int>& pendingSortData)
{
    if (pendingSortData.size() <= 1)
    {
        return;
    }

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
    if (pendingSortData.size() <= 1)
    {
        return;
    }
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
    if (pendingSortData.size() <= 1)
    {
        return;
    }

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

void QuickSort(std::vector<int>& pendingSortData, int low, int high)
{
    if (pendingSortData.size() <= 1 || low >= high)
    {
        return;
    }

    int pivot = pendingSortData[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (i < j)
        {
            if (pendingSortData[j] < pivot)
            {
                pendingSortData[i] = pendingSortData[j];
            }
            else
            {
                --j;
            }
        }

        while (i < j)
        {
            if (pendingSortData[i] > pivot)
            {
                pendingSortData[j] = pendingSortData[i];
            }
            else
            {
                ++i;
            }
        }
    }
    pendingSortData[i] = pivot;

    QuickSort(pendingSortData, low, pivot - 1);
    QuickSort(pendingSortData, pivot + 1, high);
}