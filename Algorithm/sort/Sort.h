#pragma once

#include <vector>

// ֱ�Ӳ�������ѡ��һ��Ԫ�غ�ǰ���Ѿ�����Ľ��бȽϣ��ҵ����ʵ�λ�ò�����
void InsertSort(std::vector<int>& pendingSortData);

// ѡ�����򣬼�¼��СԪ�ص�������ÿ�κ�����������Ƚ�
void SelectSort(std::vector<int>& pendingSortData);

// ��������-ð�����򣺾ֲ� -�� ���壬̰���㷨��ԭ��
// ��ʵÿ��ֻ�ܱ�֤�ֲ��������򣬴������ϲ���֪���Ƿ������
// ÿһ�������ȷʵ���³����ײ�������ֻ�Ǹ������ã�������Ŀ���Ǿֲ�����
void BubbleSort(std::vector<int>& pendingSortData);

// ��������-��������
void QuickSort(std::vector<int>& pendingSortData, int low, int high);