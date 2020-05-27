/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include<stdio.h>
//合并两个有序链表
typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	if (l2 == NULL)//如果一方为空链表，直接返回另一个！
		return l1;
	if (l1 == NULL)
		return l2;
	ListNode* cur1 = l1;//定义几个标记结点
	ListNode* cur2 = l2;
	ListNode* newhead = NULL;
	ListNode* tailnode = NULL;

	if (cur1->val <= cur2->val)//先进行首结点的比较确定头结点给谁！
	{
		newhead = cur1;
		tailnode = cur1;
		cur1 = cur1->next;
	}
	else
	{
		newhead = cur2;
		tailnode = cur2;
		cur2 = cur2->next;
	}
	while (cur1 && cur2)//然后同时向后遍历比较 加入链表
	{
		if (cur1->val <= cur2->val)
		{
			tailnode->next = cur1;
			cur1 = cur1->next;
		}
		else
		{
			tailnode->next = cur2;
			cur2 = cur2->next;
		}
		tailnode = tailnode->next;
	}
	if (cur1)//如果cur2没了的话只有cur1，就继续添加cur1！！
	{
		tailnode->next = cur1;
	}
	if (cur2)
	{
		tailnode->next = cur2;
	}
	return newhead;


}