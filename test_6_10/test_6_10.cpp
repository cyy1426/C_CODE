///反转链表

struct ListNode* reverseList(struct ListNode* head) {
	if (head == NULL)
		return NULL;
	if (head->next == NULL)
		return head;
	struct ListNode* cur = head;
	struct ListNode* pre = NULL;
	struct ListNode* next = cur->next;
	while (next)
	{
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}
	return pre;

}