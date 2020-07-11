//将一个链表以给定的x值分为两部分；前一部分为小于；后一部分为大于
//用了给两个头结点的链表形式

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		// write code here
		if (NULL == pHead)
			return NULL;
		ListNode* cur = pHead;
		ListNode lessnode(0);//给了两个头结点的链表
		ListNode* tailless = &lessnode;//同时给尾部结点标记
		ListNode greatnode(0);
		ListNode* tailgreat = &greatnode;
		while (cur)
		{
			pHead = cur->next;//更新原链表的第一个结点去下一个
			if (cur->val < x)
			{
				tailless->next = cur;
				tailless = tailless->next;
			}
			else
			{
				tailgreat->next = cur;
				tailgreat = tailgreat->next;
			}
			cur = cur->next;
		}
		tailless->next = greatnode.next;//进行两个链表的链接
		tailgreat->next = NULL;//必须得将尾部置空！
		return(lessnode.next);
	}
};