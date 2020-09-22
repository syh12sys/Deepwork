#pragma once

#include <vector>

// 直接插入排序，选择一个元素和前面已经有序的进行比较，找到合适的位置并插入
void InsertSort(std::vector<int>& pendingSortData);

// 选择排序，记录最小元素的索引，每次和这个索引作比较
void SelectSort(std::vector<int>& pendingSortData);

// 交换排序-冒泡排序：局部 -》 整体，贪心算法的原型
// 思想：其实每趟只能保证局部基本有序，多趟之后整体有序
// 每一趟最大数确实会下沉到底部，但这只是个副作用，真正的目的是局部有序
void BubbleSort(std::vector<int>& pendingSortData);

// 交换排序之快速排序
// 思想：数列中每个数都比左边的所有数大，比他右边所有的数小，那么这个数列一定识有序的
// 思路：挖坑填数 + 分治法
// 算法框架：
// while(i < j) {
//    while (i < j)
//    {
//        --j
//    }
//
//    while (i < j)
//    {
//        ++i
//    }
//}
void QuickSort(std::vector<int>& pendingSortData, int low, int high);