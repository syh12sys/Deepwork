#pragma once

#include "../DataStructure/MyList.h"

// ˫ָ����������ֽп���ָ�룬�������㷨һ�ּ򵥵ļ���
// ˼·�����ݿ���ָ���ߵĲ��������Ե���һЩ���ɣ������������������һ��

// �ж������Ƿ���ڻ�װ�ṹ
// ˼·����ָ������������ָ����һ����������ڻ�״�ṹ����ô���տ�ָ���׷����ָ��
bool hasCirle(MyList<int>* myList);

// ������λ��
// ˼·����ָ������������ָ����һ������ָ�������ʱ����ָ��ָ��������м�
MyList<int>* findMedianNum(MyList<int>* myList);


// ���ҵ�����k����
MyList<int>* findLastKNum(MyList<int>* myList, int k);


void TestDulePrime();