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
SListNode* BuySListNode(SLDataType data)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == newNode)
	{
		assert(0);//调试宏，参数为0，宏触发，非0 不会触发
		return NULL;
	}
	newNode->next = NULL;
	newNode->data = data;
	return newNode;
}


//尾插
//如果只想要在函数中改变头指针的指向，形参必须为二级指针
//如果不需要在函数中改变头指针的指向，只需传递一级直线即可，比如：SlistFInd
void SListPushback(SListNode** head, SLDataType data)
{
	//空链表
	SListNode* newNode = BuySListNode(data);
	if (NULL == *head)
	{
		*head = newNode;

	}
	else
	{
		//1.找到链表中最后一个结点
		SListNode* cur = *head;
		while (cur->next)
		{
			cur = cur->next;
		}
		//2.插入新节点
		cur->next = newNode;
	}

}
///尾删
void SListPopback(SListNode** head) 
{
	assert(head);
	if (NULL == *head)
	{
		return;
	}
	else if ((*head)->next == NULL)
	{
		//链表中只有一个节点
		free(*head);
		*head = NULL;

	}

	else
	{
		//链表非空--链表至少有一个节点
		SListNode* cur = *head;
		SListNode* prev = NULL;
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;

		}
		prev->next = cur->next;
		//最后一个节点已经找到
		//删除该节点
		free(cur);

	}



}
//头插
void SListPushfront(SListNode** head, SLDataType data)
{
	assert(head);
	SListNode* newnode = BuySListNode(data);
	newnode->next = *head;
	*head = newnode;

	//if (*head == NULL)
	//{//空链表
	//	*head = newnode;
	//}
	//else 
	//{
	//	//链表有多个节点
	//	newnode->next = *head;
	//	*head = newnode;
	//}

}
//头删  **head中保存的是头指针的地址
void SListPopfront(SListNode** head)
{
	assert(head);
	if (*head == NULL)
	{
		return;
	}
	
	/*else if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}*/
	else 
	{
		//先给第一个节点做一个标记！！
		SListNode* delnode = *head;
		*head = delnode->next;
		free(delnode);

	}

}
//任意位置插入    先不要断开链表，先将结点放到链表中，然后在拆开链表。
void SListInsertafter(SListNode* pos, SLDataType data)
{
	if (NULL == pos||NULL==pos->next)
		return;
	SListNode* newnode = BuySListNode(data);
	newnode->next = pos->next;
	pos->next = newnode;

}
//任意位置删除
void SListEraseafter(SListNode* pos)
{
	if (NULL == pos)
		return;
	SListNode* delnode = pos->next;
	pos->next = delnode->next;
	free(delnode);
}

//此时head指向的就是链表中第一个节点
int SListSize(SListNode* head)
{
	if (NULL == head)
		return 0;
	SListNode* cur = head;
	int count = 0;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count; 
}
int SListEmpty(SListNode* head)
{
	return NULL != head;

}
//查找结点位置
SListNode* SListFind(SListNode* head, SLDataType data)
{
	SListNode* cur = head;
	while (cur)
	{
		if (cur->data == data)
			return cur;
		cur = cur->next;
	}
	return NULL;

}
//销毁链表
void SListDestroy(SListNode** head)
{
	assert(head);
	while (*head)
	{
		SListNode* delnode = *head;
		*head = delnode->next;
		free(delnode);
	}
}

//打印链表
void PrintSList(SListNode* head)
{
	SListNode* cur = head;
	while (cur)
	{
		printf("%d--->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//////////
void TestSList()
{
	SListNode* head = NULL;
	SListPushback(&head, 1);
	SListPushback(&head, 2);
	SListPushback(&head, 3);
	SListPushback(&head, 4);
	SListPushback(&head, 5);
	SListPushback(&head, 6);

	PrintSList(head);
	SListPopback(&head);
	SListPopback(&head);
	SListPopback(&head);
	SListPopback(&head);
	SListPopback(&head);
	SListPopback(&head);
	SListPopback(&head);
	
	PrintSList(head);
	SListDestroy(&head);
}
void testlist2()
{
	SListNode* head = NULL;
	SListPushfront(&head, 1);
	SListPushfront(&head, 2);
	PrintSList(head);
	SListDestroy(&head);
	 
}
void test3()
{
	SListNode* head = NULL;
	SListPushfront(&head, 1);
	SListPushfront(&head, 2);
	SListPushfront(&head, 3);
	SListPushfront(&head, 4);
	SListInsertafter(SListFind(head, 3), 0);
	PrintSList(head);

	SListInsertafter(SListFind(head, 300), 0);
	PrintSList(head);

	SListEraseafter(SListFind(head, 0));
	PrintSList(head);
	printf("%d\n", SListSize(head));

	SListDestroy(&head);
}

