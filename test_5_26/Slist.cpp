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
SListNode* BuySListNode(SLDataType data)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == newNode)
	{
		assert(0);//���Ժ꣬����Ϊ0���괥������0 ���ᴥ��
		return NULL;
	}
	newNode->next = NULL;
	newNode->data = data;
	return newNode;
}


//β��
//���ֻ��Ҫ�ں����иı�ͷָ���ָ���βα���Ϊ����ָ��
//�������Ҫ�ں����иı�ͷָ���ָ��ֻ�贫��һ��ֱ�߼��ɣ����磺SlistFInd
void SListPushback(SListNode** head, SLDataType data)
{
	//������
	SListNode* newNode = BuySListNode(data);
	if (NULL == *head)
	{
		*head = newNode;

	}
	else
	{
		//1.�ҵ����������һ�����
		SListNode* cur = *head;
		while (cur->next)
		{
			cur = cur->next;
		}
		//2.�����½ڵ�
		cur->next = newNode;
	}

}
///βɾ
void SListPopback(SListNode** head) 
{
	assert(head);
	if (NULL == *head)
	{
		return;
	}
	else if ((*head)->next == NULL)
	{
		//������ֻ��һ���ڵ�
		free(*head);
		*head = NULL;

	}

	else
	{
		//����ǿ�--����������һ���ڵ�
		SListNode* cur = *head;
		SListNode* prev = NULL;
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;

		}
		prev->next = cur->next;
		//���һ���ڵ��Ѿ��ҵ�
		//ɾ���ýڵ�
		free(cur);

	}



}
//ͷ��
void SListPushfront(SListNode** head, SLDataType data)
{
	assert(head);
	SListNode* newnode = BuySListNode(data);
	newnode->next = *head;
	*head = newnode;

	//if (*head == NULL)
	//{//������
	//	*head = newnode;
	//}
	//else 
	//{
	//	//�����ж���ڵ�
	//	newnode->next = *head;
	//	*head = newnode;
	//}

}
//ͷɾ  **head�б������ͷָ��ĵ�ַ
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
		//�ȸ���һ���ڵ���һ����ǣ���
		SListNode* delnode = *head;
		*head = delnode->next;
		free(delnode);

	}

}
//����λ�ò���    �Ȳ�Ҫ�Ͽ������Ƚ����ŵ������У�Ȼ���ڲ�����
void SListInsertafter(SListNode* pos, SLDataType data)
{
	if (NULL == pos||NULL==pos->next)
		return;
	SListNode* newnode = BuySListNode(data);
	newnode->next = pos->next;
	pos->next = newnode;

}
//����λ��ɾ��
void SListEraseafter(SListNode* pos)
{
	if (NULL == pos)
		return;
	SListNode* delnode = pos->next;
	pos->next = delnode->next;
	free(delnode);
}

//��ʱheadָ��ľ��������е�һ���ڵ�
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
//���ҽ��λ��
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
//��������
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

//��ӡ����
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

