//求一个链表中的中间结点！
typedef struct ListNode ListNode;
struct ListNode* middleNode(struct ListNode* head) {
	//方法定义两个指针，让一个走的速度是慢的二倍，这样当快的到头的时候就是慢走到中间结点的时候！！
	ListNode* fast = head;
	ListNode* slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;

}