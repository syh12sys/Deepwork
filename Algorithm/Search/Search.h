#pragma once

#include <vector>

// ˳����ң����Ƽ���ʵ��һ����ͨ�õĲ����㷨
bool SequenceSearch(const std::vector<int>& data, int target);

// ���ֲ��ң������Դ�����ָ�����壬����ƽʱ����Ҳ���нϴ�ָ�����壬¼����ݴ����ύ���Ų�����
bool BinarySearch(const std::vector<int>& data, int target, int& search_cout);