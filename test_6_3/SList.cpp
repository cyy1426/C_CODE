#include"DHCList.h"

//ǰ�᣺ ��ͷ���ѭ��˫������
DHCLnode* BuyDHCListnode(DLDataType data)
{
	DHCLnode* newnode = (DHCLnode*)malloc(sizeof(DHCLnode));
	if (NULL == newnode)
	{
		assert(0);
		return NULL;
	}
	newnode->data = data;
	newnode->prev = NULL;
	newnode->next = NULL;
}

//��ʼ������ͷ���
DHCLnode* DHCListInit()
{
	DHCLnode* head = BuyDHCListnode(0);
	head->next = head;
	head->prev = head;
	return head;
}
//β��
void DHCListPushback(DHCListnode* phead, DLDataType data)
{
	assert(phead);
	DHCListInsert(phead, data);

}
//βɾ
void DHCListPopback(DHCListnode* phead)
{
	if (DHCListEmpty(phead))
		return;
	DHCListErase(phead->prev);
}


//ͷ��ֱ�ӵ�������λ�ò���
void DHCListPushfront(DHCListnode* phead, DLDataType data)
{
	assert(phead);
	DHCListInsert(phead->next, data);
}
//ͷɾ
void DHCListPopfront(DHCListnode* phead)
{
	if (DHCListEmpty(phead)) 
		return;
	DHCListErase(phead->next);

}


//����λ�õĲ���(֮ǰ)
void DHCListInsert(DHCListnode* pos, DLDataType data)
{
	if (pos == NULL)
		return;
	//0.�����½ڵ�
	DHCLnode* newnode = BuyDHCListnode(data);
	//1.�Ƚ��½ڵ����ӵ�ԭ������
	newnode->next = pos;
	newnode->prev = pos->prev;
	//2.�Ͽ�����������ڵ�
	pos->prev = newnode;
	newnode->prev->next = newnode;
}
//����λ�õ�ɾ��
void DHCListErase(DHCListnode* pos)
{
	if (NULL == pos)
		return;
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
}

//��ѯ�ڵ�
DHCLnode* DHCListFind(DHCLnode* phead, DLDataType data)
{
	assert(phead);
	DHCLnode* cur = phead->next;
	while (cur != phead)
	{
		if (phead->data == data)
			return cur;
		cur = cur->next;
	}
	return NULL;
}


//�жϽڵ����
int DHCListSize(DHCLnode* phead)
{
	assert(phead);
	DHCLnode* cur = phead->next;
	int count = 0;
	while (cur!=phead)
	{  
		++count;
		cur = cur->next;
	}
	return count;

}

//�п�
int DHCListEmpty(DHCLnode* phead)
{
	assert(phead);
	return phead->next == phead;

}
//ֻ��ɾ����Ч�ڵ㲻ɾ��ͷ
void DHCListClear(DHCLnode* phead)
{	
	assert(phead);
	DHCLnode* cur = phead->next;
	while (cur != phead)
	{
		phead->next = cur->next;
		free(cur);
		cur = phead->next;
	}
	//����Ϊ��
	phead->next = phead;
	phead->prev = phead;

}
///**********
void DHCListDestroy(DHCLnode** phead)
{
	assert(phead);
	DHCListClear(*phead);
	free(*phead);
	*phead = NULL;
}
//��ӡ
void PrintDHCList(DHCLnode* head)
{
	DHCLnode* cur = head->next;
	while (cur != head)
	{
		printf("%d", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void TestDHCL()
{
	DHCListnode* head = DHCListInit();
	DHCListPushback(head, 1);
	DHCListPushback(head, 2);
	DHCListPushback(head, 1);
	PrintDHCList(head);
}
int main()
{
	TestDHCL();
	return 0;
}