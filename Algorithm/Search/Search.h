#pragma once

#include <vector>

// 顺序查找，看似简单其实是一种最通用的查找算法
bool SequenceSearch(const std::vector<int>& data, int target);

// 二分查找，不仅对代码有指导意义，对于平时做事也是有较大指导意义，录入根据代码提交号排查问题
bool BinarySearch(const std::vector<int>& data, int target, int& search_cout);