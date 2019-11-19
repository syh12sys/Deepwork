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

// ���⣺���������ǰ������ ���������� ����һ�ַ����Խṹ����Ҫ�õݹ�˼ά�����
// �ĵã��ݹ��Ƕ���ʵ����ֱ�۵Ŀ̻�������ʹ����򵥵�ģ�ͣ��ظ�ȥ����������⣬ǧ��Ҫ�ó����ȵݣ����ﱾ�ʣ��ٹ飨���ɽ������˼άȥ��⣬���������ԯ����
// �ĵã��ݹ���������ֵ�һ�ݹ�����������ڶ��ݹ鷨��
BiTree* RecreateTree(const std::vector<int>& pre, const std::vector<int>& inorder);

// ����������
void TraverseBitree(BiTree* root);