/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};
*//////////////删除链表中的重复结点！！！！！！！！
class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		ListNode* start = pHead;
		ListNode* prev = NULL;
		ListNode* end = start;
		//1. 找重复结点的区间
		while (start)
		{
			end = start->next;
			while (end)
			{
				if (start->val != end->val)
				{
					break;
				}
				end = end->next;
			}


			//2.删除重复结点的
			if (start->next == end)
			{
				//区间中没有重复的元素
				prev = start;
				start = end;
			}
			else
			{
				//有重复的元素
				while (start != end)
				{
					//头删
					if (start == pHead)
					{
						pHead = start->next;
						free(start);
						start = pHead;
					}
					else
					{
						//其他结点的删除
						prev->next = start->next;
						free(start);
						start = prev->next;
					}
				}
			}
		}
		return pHead;
	}
};