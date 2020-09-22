#pragma once

#include "../DataStructure/MyArray.h"

// 双索引翻转数组
// 思路：双索引逼近法，高低索引相互交换
// 应用：一个从大到小的有序数组，交换为从小到的有序数组
void ReverserArray(MyArray<int>* myArray);

void TestDubleIndex();