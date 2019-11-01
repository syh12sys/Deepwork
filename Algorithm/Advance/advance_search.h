#pragma once

// 有序矩阵，每一行时从小到大的有数组，每一列也是从小到大的有序数组，从中找出一个数字
// 两种实现思路，
//    1. 每一行利用二分查找，其实这种思路有明显的缺陷，没有利用列的有序性
//    2. 从右上角开始查找，那么左边的数字都是比目标大，右边的数字都是比目标小

// 思路1：每一行二分查找
bool SearchInSortedMatrix(int matrix[3][4], int target, int& search_cout);

// 思路2：从右上角开始查找，性能优于二分查找
bool SearchInSortedMatrix2(int matrix[3][4], int target, int& search_cout);

// 思路3：右上角查找 + 二分查找，如果全部有序性能优于思路2，如果有两行需要查找性能比思路2差
bool SearchInSortedMatrix3(int matrix[3][4], int target, int& search_cout);