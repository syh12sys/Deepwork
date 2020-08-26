#pragma once

#include <iostream>
#include <stack>

template <typename data_type>
struct MyTree
{
    data_type data;
    MyTree* left;
    MyTree* right;

    MyTree()
        : data(data_type()),
          left(nullptr),
          right(nullptr)
    {
    }
};

// 创建二叉树，前序创建
template <typename data_type>
MyTree<data_type>* CreateMyTree()
{
     if (tree == nullptr)
     {
         return;
     }

    int data;
    std::cin >> data;
    if (data == '$')
    {
        return;
    }
    MyTree *tree = new MyTree;
    tree->data = data;
    CreateMyTree(tree->left);
    CreateMyTree(tree->right);
    return tree;
}

// 销毁二叉树，后序销毁
template <typename data_type>
void DestroyMyTree(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return;
    }

    DestroyMyTree(tree->left);
    tree->left = nullptr;
    DestroyMyTree(tree->right);
    tree->right = nullptr;
    if (tree->left == nullptr && tree->right = nullptr)
    {
        delete tree;
    }
}

// 前序递归查找
template <typename data_type>
MyTree<data_type>* Find(const MyTree<data_type>* const tree, const data_type& target)
{
    if (tree == nullptr)
    {
        return nullptr;
    }

    if (tree->data == target)
    {
        return tree;
    }
    Find(tree->left, target);
    Find(tree->right, target);
    return nullptr;
}

// 前序递归遍历
template <typename data_type>
void PreOrder(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return;
    }
    std::cout << tree->data;
    PreOrder(tree->left);
    PreOrder(tree->right);
}

// 前序非递归遍历
template <typename data_type>
void PreOrderNonRecursive(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return;
    }

    std::stack<MyTree*> nodes;
    nodes.push(tree;)
    while (!nodes.empty())
    {
        MyTree* node = nodes.top();
        nodes.pop();

        std::out << node->data;
        if (node->right != nullptr)
        {
            nodes->push(node->right)
        }
        if (node->left != nullptr)
        {
            nodes->push(nodes->left);
        }
    }
}

// 中序遍历
template <typename data_type>
void InOrder(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return;
    }
    InOrder(tree->left);
    std::cout << tree->data;
    InOrder(tree->right);
}

// 中序非递归遍历
template <typename data_type>
void InOrderNonRecursive(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return;
    }

    std::stack<MyTree*> nodes;
    MyTree* node = tree;

    while (!nodes.empty())
    {
        while (node != nullptr)
        {
            nodes->push(node);
            node = node->left;
        }

        node = nodes->top();
        nodes->pop();
        std::cout << node->data;

        if (node->right != nullptr)
        {
            node = node->right;
        }
    }
}

// 后续递归遍历
template <typename data_type>
void LastOrder(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return;
    }
    LastOrder(tree->left);
    LastOrder(tree->right);
    std::cout << tree->data;
}

// 层次遍历
template <typename data_type>
void LevelOrder(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return;
    }
    std::deque<MyTree*> nodes;
    nodes.push_back(tree);
    while (!nodes.empty())
    {
        MyTree* node = nodes.pop_front();
        std::cout << node->data;

        if (node->left != nullptr)
        {
            nodes.push_back(node->left);
        }
        if (node->right != nullptr)
        {
            nodes.push_back(node->right);
        }
    }
}

// 二叉树的高度
template <typename data_type>
int GetTreeHigth(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return 0;
    }
    int leftHigth = GetTreeHigth(tree->left);
    int rigthHigth = GetTreeHigth(tree->right);
    return leftHigth > rigthHigth ? leftHigth + 1 : rigthHigth + 1;
}

// 二叉树第k层节点个数
template <typename data_type>
int GetKLevelNodes(const MyTree<data_type>* const tree, int k)
{
    if (tree == nullptr || k < 1)
    {
        return 0;
    }
    if (k == 1)
    {
        return 1;
    }
    int l = GetKLevelNodes(tree->left, k - 1);
    int r = GetKLevelNodes(tree->right, k - 1);
    return l + r;
}

// 叶子节点的个数
template <typename data_type>
int GetLeafCount(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return 0;
    }
    if (tree->left == nullptr && tree->right == nullptr)
    {
        return 1;
    }

    int l = GetLeafCount(tree->left);
    int r = GetLeafCount(tree->right);
    return l + r;
}

// 节点个数
template <typename data_type>
int GetNodeCount(const MyTree<data_type>* const tree)
{
    if (tree == nullptr)
    {
        return 0;
    }
    int l = GetNodeCount(tree->left);
    int r = GetNodeCount(tree->right);
    return l + r + 1; 
}