#pragma once

#include <vector>

// �������
// ˳����ң���ٷ����ʺ����Ժ���ʽ�洢�ṹ
// ���ֲ��ң�Ч����ߣ������Ƶ�һ�����Դ洢�ṹ���ڶ�����Ҫ�������ʺϽ�����ɾͲ��ٱ仯�ĳ���
// �ֿ���ң����ݷֿ飬ÿ��ѡȡ���ֵ�����������������ҵ�ʱ����ʹ�ö��ֲ�����������ʹ��˳�����ÿ��
//           ʵ��ʵ�ü�ֵ���ߣ�û��hash��ʹ�÷��㣬������ֿ��˼��Ӧ�ü���㷺���������ݿ�ķֱ��ѯ

// ˳����ң����Ƽ���ʵ��һ����ͨ�õĲ����㷨
bool SequenceSearch(const std::vector<int>& data, int target);

// ���ֲ��ң���С��Χ�����Ч�ĵ��鷽��
// �����Դ�����ָ�����壬����ƽʱ����Ҳ���нϴ�ָ�����壬¼����ݴ����ύ���Ų�����
bool BinarySearch(const std::vector<int>& data, int target, int& search_cout);

// �ݹ���ֲ���
bool BinarySearchRecursive(const std::vector<int>& data, int low, int high, int target);