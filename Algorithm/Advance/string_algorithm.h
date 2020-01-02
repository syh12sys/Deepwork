#pragma once

// 字符串中的空格替换为%20，例如 how are you 替换后 how%20are%20you
// 思考过程：
// 第一印象是使用分配大内存，遇到空格插入%20，然而会造成大量元素的移动以及反复分配内存，这属于无脑子的算法
// 第二思维是尝试用逐段拷贝的方法，思路对了，然而一上来就使用了带边界条件的案例去分析，导致算法变得很复杂
// 经过探索调整方法，首先使用最正常的场景去探索算法，其次使用边界条件去验证算法，对算法进行补充
void ReplaceStringSpace(const char* oldText, int old_len, char* newText, int* newLen);