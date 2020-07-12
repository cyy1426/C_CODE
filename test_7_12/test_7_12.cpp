//求两个链表的交点，先判断，再求差值，先移动差值后，两个同时移动，相等的那一刻就是交点
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
	struct ListNode* curA = headA;
	struct ListNode* curB = headB;
	int countA = 1, countB = 1;
	if (headA == NULL || headB == NULL)
		return NULL;
	while (curA)
	{
		countA++;
		curA = curA->next;
	}
	while (curB)
	{
		countB++;
		curB = curB->next;
	}
	if (curB != curA)
		return NULL;
	curA = headA;
	curB = headB;
	int gap = countA - countB;
	if (gap > 0)
	{
		while (gap--)
		{
			curA = curA->next;
		}
	}
	else
	{
		while (gap++)
		{
			curB = curB->next;
		}
	}
	while (curB != curA)
	{
		curA = curA->next;
		curB = curB->next;
	}
	return curA;

}
///判断一个链表是否带环：方法 两个指针 快慢指针判断
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode* head) {
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			return true;
	}
	return false;

}
///判断一个链表是否带环  带则返回入环结点
///知识点：让一个结点从头开始走一步，另一个结点从相遇点开始走一步，杰伦是 俩终究会在入环点相遇！！！！
///////公式得来的  设无环长度为L，环长为R，环内X相遇 ，则起始快慢两倍的关系可得——>
/////                         2(L+X)=L+X+nR
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* hascircle(struct ListNode* head)
{
	if (head == NULL)
		return NULL;
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			return fast;
	}
	return NULL;
}
struct ListNode* detectCycle(struct ListNode* head) {
	struct ListNode* pM = hascircle(head);
	if (NULL == pM)
		return NULL;
	struct ListNode* pH = head;
	while (pH != pM)
	{
		pM = pM->next;
		pH = pH->next;

	}
	return pM;


}