#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SListNode
{
	SListNode* next;//指向下一个结点的地址
	SLDataType data;//存储该结点的数据
}SListNode;

//申请一个新节点
SListNode* BuySListNode(SLDataType data);


//尾插
void SListPushback(SListNode** head, SLDataType data);

//尾删
void SListPopback(SListNode** head);
//头插
void SListPushfront(SListNode** head, SLDataType data);
//头删
void SListPopfront(SListNode** head);
//任意位置插入
void SListInsertafter(SListNode* pos, SLDataType data);
//任意位置删除
void SListEraseafter(SListNode* pos);

//节点个数
int SListSize(SListNode* head);
int SListEmpty(SListNode* head);
//找寻结点下标
SListNode* SListFind(SListNode* head, SLDataType data);
//销毁
void SListDestroy(SListNode* head);

//打印链表
void PrintSList(SListNode* head);


//////////
void TestSList();
void testlist2();
void test3();

