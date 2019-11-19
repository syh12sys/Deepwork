#include "stdafx.h"
#include "tree_algorithm.h"

#include <iostream>

BiTree* RecreateTree(const std::vector<int>& pre, const std::vector<int>& inorder)
{
    if (pre.empty())
    {
        return nullptr;
    }

    BiTree* node = new BiTree;
    node->data = pre[0];

    size_t nodeIndex = 0;
    while (nodeIndex < inorder.size())
    {
        if (inorder[nodeIndex] == node->data)
        {
            break;
        }
        ++nodeIndex;
    }

    auto left_pre = std::vector<int>(pre.begin() + 1, pre.begin() + nodeIndex + 1);
    auto right_pre = std::vector<int>(pre.begin() + nodeIndex + 1, pre.end());
    auto left_inorder = std::vector<int>(inorder.begin(), inorder.begin() + nodeIndex);
    auto right_inorder = std::vector<int>(inorder.begin() + nodeIndex + 1, inorder.end());
    node->left = RecreateTree(left_pre, left_inorder);
    node->right = RecreateTree(right_pre, right_inorder);
    return node;
}

void TraverseBitree(BiTree* root)
{
    if (root == nullptr)
    {
        return;
    }
    TraverseBitree(root->left);
    std::cout << root->data << "\t";
    TraverseBitree(root->right);
}