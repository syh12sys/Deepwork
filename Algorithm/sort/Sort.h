#pragma once

#include <vector>

// ֱ�Ӳ�������ѡ��һ��Ԫ�غ�ǰ���Ѿ�����Ľ��бȽϣ��ҵ����ʵ�λ�ò�����
void InsertSort(std::vector<int>& pendingSortData);

// ѡ�����򣬼�¼��СԪ�ص�������ÿ�κ�����������Ƚ�
void SelectSort(std::vector<int>& pendingSortData);

// ��������-ð�����򣺾ֲ� -�� ���壬̰���㷨��ԭ��
// ˼�룺��ʵÿ��ֻ�ܱ�֤�ֲ��������򣬶���֮����������
// ÿһ�������ȷʵ���³����ײ�������ֻ�Ǹ������ã�������Ŀ���Ǿֲ�����
void BubbleSort(std::vector<int>& pendingSortData);

// ��������֮��������
// ˼�룺������ÿ����������ߵ��������󣬱����ұ����е���С����ô�������һ��ʶ�����
// ˼·���ڿ����� + ���η�
// �㷨��ܣ�
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