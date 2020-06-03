#pragma once
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
typedef int DLDataType;
typedef struct DHCListnode
{
	DLDataType data;
	struct DHCListnode* next; //指向当前节点的下一个节点
	struct DHCListnode* prev; //指向当前节点的前一个节点
}DHCLnode;

//将头结点创建好

//初始化
DHCLnode* DHCListInit();

void DHCListPushback(DHCListnode* phead,DLDataType data);

void DHCListPopback(DHCListnode* phead);

void DHCListPushfront(DHCListnode* phead, DLDataType data);
void DHCListPopfront(DHCListnode* phead);
void DHCListInsert(DHCListnode* pos, DLDataType data);
void DHCListErase(DHCListnode* pos);

DHCLnode* DHCListFind(DHCLnode* phead, DLDataType data);

int DHCListSize(DHCLnode* phead);
int DHCListEmpty(DHCLnode* phead);

void DHCListClear(DHCLnode* phead);
void DHCListDestroy(DHCLnode** phead);

void TestDHCL();
void PrintDHCList(DHCLnode* head);
