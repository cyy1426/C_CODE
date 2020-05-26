#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SListNode
{
	SListNode* next;//ָ����һ�����ĵ�ַ
	SLDataType data;//�洢�ý�������
}SListNode;

//����һ���½ڵ�
SListNode* BuySListNode(SLDataType data);


//β��
void SListPushback(SListNode** head, SLDataType data);

//βɾ
void SListPopback(SListNode** head);
//ͷ��
void SListPushfront(SListNode** head, SLDataType data);
//ͷɾ
void SListPopfront(SListNode** head);
//����λ�ò���
void SListInsertafter(SListNode* pos, SLDataType data);
//����λ��ɾ��
void SListEraseafter(SListNode* pos);

//�ڵ����
int SListSize(SListNode* head);
int SListEmpty(SListNode* head);
//��Ѱ����±�
SListNode* SListFind(SListNode* head, SLDataType data);
//����
void SListDestroy(SListNode* head);

//��ӡ����
void PrintSList(SListNode* head);


//////////
void TestSList();
void testlist2();
void test3();

