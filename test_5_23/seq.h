#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SDatatype;
typedef struct SeqList
{
	SDatatype* array;  ///���Ԫ�صĿռ��С������ʱ����
	int capacity; //�ռ�����
	int size; //��ЧԪ�ظ���
}SeqList;
//typedef struct SeqList SeqList;

//��ʼ��
void SeqListInit(SeqList* s, int initCapcity);


//β��
void SeqListPushback(SeqList* s, SDatatype data);

//βɾ
void SeqListPopback(SeqList* s);


//ͷ��
void SeqListPushfront(SeqList* s, SDatatype data);

//ͷɾ
void SeqListPopfront(SeqList* s);

//����λ�ò���
void SeqListInsert(SeqList* s,int pos,SDatatype data);

//����λ��ɾ��
void SeqListErase(SeqList* s,int pos);

//��ȡ˳�����ЧԪ�ظ���
int SeqListSize(SeqList* s);

//��ȡ˳�������
int SeqListCapacity(SeqList* s);

//�ж��Ƿ�Ϊ��
int SeqListEmpty(SeqList* s);


//����˳�����Ԫ�ط����±�
int SeqListFind(SeqList* s,SDatatype data);

//����
void SeqListDestory(SeqList* s);

//���Է���
void TestSeqList();
void test1();

