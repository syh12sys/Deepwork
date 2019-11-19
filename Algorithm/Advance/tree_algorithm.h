#pragma once

#include <vector>

typedef struct TagBiTree
{
    int data;
    TagBiTree* left;
    TagBiTree* right;
    TagBiTree()
    {
        data = 0;
        left = nullptr;
        right = right;
    }
} BiTree;

// 问题：中序数组和前序数组 构造整棵树 树是一种非线性结构，需要用递归思维来理解
// 心得：递归是对现实世界直观的刻画，就是使用最简单的模型，重复去解决复杂问题，千万不要用程序先递（事物本质）再归（归纳解决）的思维去理解，否则就是南辕北辙
// 心得：递归包含两部分第一递归结束条件，第二递归法则
BiTree* RecreateTree(const std::vector<int>& pre, const std::vector<int>& inorder);

// 遍历二叉树
void TraverseBitree(BiTree* root);