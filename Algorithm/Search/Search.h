#pragma once

#include <vector>

// 三大查找
// 顺序查找：穷举法，适合线性和链式存储结构
// 二分查找：效率奇高，但限制第一是线性存储结构，第二是需要先排序，适合建立完成就不再变化的场景
// 分块查找：数据分块，每块选取最大值建立有序索引表；查找的时候先使用二分查找索引表，再使用顺序查找每块
//           实际实用价值不高，没有hash表使用方便，但是其分块的思想应用及其广泛，例如数据库的分表查询

// 顺序查找，看似简单其实是一种最通用的查找算法
bool SequenceSearch(const std::vector<int>& data, int target);

// 二分查找：缩小范围是最高效的调查方案
// 不仅对代码有指导意义，对于平时做事也是有较大指导意义，录入根据代码提交号排查问题
bool BinarySearch(const std::vector<int>& data, int target, int& search_cout);

// 递归二分查找
bool BinarySearchRecursive(const std::vector<int>& data, int low, int high, int target);