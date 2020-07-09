//返回一个链表的倒数第k个结点
/////思路是：也是定义两个指针fast 和slow  
//先让快的fast走k步，走完在同时向后走，这时候的slow就是结果
//版本1
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (NULL == pListHead || k == 0)
			return NULL;
		ListNode* fast = pListHead;
		ListNode* slow = pListHead;
		while (k--)
		{
			if (fast == NULL)
				return NULL;

			fast = fast->next;


		}

		while (fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return slow;


	}
}
//版本2
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (NULL == pListHead || k == 0)
			return NULL;
		ListNode* fast = pListHead;
		ListNode* slow = pListHead;
		while (--k)
		{
			if (fast == NULL)
				return NULL;

			fast = fast->next;


		}
		//这时候多加了个判断 因为是--k  先减后用的   如果到0 了其实没执行上面那的判断，在这补上
		if (fast == NULL)
			return NULL;

		while (fast->next)//这个判断也变了，少走了一部 所以这个判断条件得多走一步补回来！
		{
			slow = slow->next;
			fast = fast->next;
		}
		return slow;


	}
}