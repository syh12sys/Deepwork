#pragma once

// �������ÿһ��ʱ��С����������飬ÿһ��Ҳ�Ǵ�С������������飬�����ҳ�һ������
// ����ʵ��˼·��
//    1. ÿһ�����ö��ֲ��ң���ʵ����˼·�����Ե�ȱ�ݣ�û�������е�������
//    2. �����Ͻǿ�ʼ���ң���ô��ߵ����ֶ��Ǳ�Ŀ����ұߵ����ֶ��Ǳ�Ŀ��С

// ˼·1��ÿһ�ж��ֲ���
bool SearchInSortedMatrix(int matrix[3][4], int target, int& search_cout);

// ˼·2�������Ͻǿ�ʼ���ң��������ڶ��ֲ���
bool SearchInSortedMatrix2(int matrix[3][4], int target, int& search_cout);

// ˼·3�����Ͻǲ��� + ���ֲ��ң����ȫ��������������˼·2�������������Ҫ�������ܱ�˼·2��
bool SearchInSortedMatrix3(int matrix[3][4], int target, int& search_cout);