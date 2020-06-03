#include"DHCList.h"

//前提： 带头结点循环双向链表
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

//初始化申请头结点
DHCLnode* DHCListInit()
{
	DHCLnode* head = BuyDHCListnode(0);
	head->next = head;
	head->prev = head;
	return head;
}
//尾插
void DHCListPushback(DHCListnode* phead, DLDataType data)
{
	assert(phead);
	DHCListInsert(phead, data);

}
//尾删
void DHCListPopback(DHCListnode* phead)
{
	if (DHCListEmpty(phead))
		return;
	DHCListErase(phead->prev);
}


//头插直接调用任意位置插入
void DHCListPushfront(DHCListnode* phead, DLDataType data)
{
	assert(phead);
	DHCListInsert(phead->next, data);
}
//头删
void DHCListPopfront(DHCListnode* phead)
{
	if (DHCListEmpty(phead)) 
		return;
	DHCListErase(phead->next);

}


//任意位置的插入(之前)
void DHCListInsert(DHCListnode* pos, DLDataType data)
{
	if (pos == NULL)
		return;
	//0.申请新节点
	DHCLnode* newnode = BuyDHCListnode(data);
	//1.先将新节点链接到原链表中
	newnode->next = pos;
	newnode->prev = pos->prev;
	//2.断开新链表，插入节点
	pos->prev = newnode;
	newnode->prev->next = newnode;
}
//任意位置的删除
void DHCListErase(DHCListnode* pos)
{
	if (NULL == pos)
		return;
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
}

//查询节点
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


//判断节点个数
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

//判空
int DHCListEmpty(DHCLnode* phead)
{
	assert(phead);
	return phead->next == phead;

}
//只是删除有效节点不删除头
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
	//链表为空
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
//打印
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