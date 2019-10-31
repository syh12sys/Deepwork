#pragma once

#include <vector>

// 直接插入排序，选择一个元素和前面已经有序的进行比较，找到合适的位置并插入
void InsertSort(std::vector<int>& pendingSortData);

// 选择排序，记录最小元素的索引，每次和这个索引作比较
void SelectSort(std::vector<int>& pendingSortData);

// 冒泡排序
void BubbleSort(std::vector<int>& pendingSortData);