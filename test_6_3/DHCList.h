#pragma once
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
typedef int DLDataType;
typedef struct DHCListnode
{
	DLDataType data;
	struct DHCListnode* next; //ָ��ǰ�ڵ����һ���ڵ�
	struct DHCListnode* prev; //ָ��ǰ�ڵ��ǰһ���ڵ�
}DHCLnode;

//��ͷ��㴴����

//��ʼ��
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
