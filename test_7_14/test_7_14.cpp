/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* insertionSortList(struct ListNode* head) {
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode* newhead = NULL;
	struct ListNode* cur = head;
	while (cur)
	{
		head = cur->next;
		//新链表中有结点 找新位置
		struct ListNode* insertpos = newhead;
		struct ListNode* insertprev = NULL;
		while (insertpos)
		{
			if (cur->val > insertpos->val)
			{
				insertprev = insertpos;
				insertpos = insertpos->next;

			}
			else
			{
				break;
			}
		}
		if (NULL == insertprev)
		{
			cur->next = newhead;
			newhead = cur;
		}
		else
		{
			cur->next = insertpos;
			insertprev->next = cur;
		}
		cur = head;
	}
	return newhead;
}
