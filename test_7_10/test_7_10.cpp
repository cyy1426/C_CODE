//两种方式实现两个链表的合并，一种是带头结点的单链表，一种是不带头结点的链表
//带头的更加方便  ，少了一个判断起始结点的指向问题
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	if (NULL == l1)
		return l2;
	if (NULL == l2)
		return l1;
	struct ListNode* cur1 = l1;
	struct ListNode* cur2 = l2;
	struct ListNode newhead;
	struct ListNode* tail = &newhead;

	while (cur1 && cur2)
	{
		if (cur1->val <= cur2->val)
		{
			tail->next = cur1;
			cur1 = cur1->next;

		}
		else
		{
			tail->next = cur2;
			cur2 = cur2->next;
		}
		tail = tail->next;
	}
	if (cur1)
		tail->next = cur1;
	if (cur2)
		tail->next = cur2;
	return newhead.next;

}
//******上面是带头结点的链表合并
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	if (l2 == NULL)
		return l1;
	if (l1 == NULL)
		return l2;
	ListNode* cur1 = l1;
	ListNode* cur2 = l2;
	ListNode* newhead = NULL;
	ListNode* tailnode = NULL;

	if (cur1->val <= cur2->val)
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
	while (cur1 && cur2)
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
	if (cur1)
	{
		tailnode->next = cur1;
	}
	if (cur2)
	{
		tailnode->next = cur2;
	}
	return newhead;


}