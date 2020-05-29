///逆置链表
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode* pre = NULL;//先定义三个结点  一个当前 一个之前  一个之后
	struct ListNode* cur = head;
	struct ListNode* next = NULL;
	if (head == NULL)//如果为空链表 则返回NULL；
		return NULL;
	while (cur->next)//判断当到NULL时停止
	{      ////以0 1 2 3 为例
		next = cur->next;//先把2给next
		cur->next = pre; //把cur-next置空
		pre = cur;//把当前1 给pre
		cur = next; //把2给当前结点进行下一次
	}///////////一次循环变成了 
	cur->next = pre;
	return cur;


}