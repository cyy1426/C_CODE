//两种方法判断一个链表是不是一个回文结构  上海自来水来自海上
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};*/
//方法一：将链表内容进行转移到一个数组中，再进行判断！
class PalindromeList {
public:
	bool chkPalindrome(ListNode* A) {
		// write code here
		if (NULL == A)
			return true;
		int array[900] = { 0 };
		int size = 0;
		ListNode* cur = A;
		while (cur)
		{
			array[size++] = cur->val;
			cur = cur->next;
		}
		int left = 0, right = size - 1;
		while (left < right)
		{
			if (array[left] != array[right])
				return false;
			right--;
			left++;
		}
		return true;
	}
};
//方法二：找到链表的中间位置，将前半段进行逆置，然后两个比较
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};*/
//重点回顾了逆置链表的方法！！
class PalindromeList {
public:
	ListNode* Reverlist(ListNode* head)
	{
		ListNode* cur = head;//得有三个指针
		ListNode* prev = NULL;
		ListNode* next = NULL;
		while (cur)
		{
			next = cur->next;//得先保存移到下一个要动的位置
			cur->next = prev;//顺次变换就行！是把前的给到下一个//或者说本该指向下一个指到前面去了
			prev = cur;//更新
			cur = next;//更新
		}
		return prev;//返回prev
	}
	bool chkPalindrome(ListNode* A) {
		/*// write code here
		if(NULL==A)
			return true;
		int array[900]={0};
		int size=0;
		ListNode* cur=A;
		while(cur)
		{
			array[size++]=cur->val;
			cur=cur->next;
		}
		int left=0,right=size-1;
		while(left<right)
		{
			if(array[left]!=array[right])
				return false;
			right--;
			left++;
		}
		return true;
	}*/

		ListNode* fast = A;
		ListNode* slow = A;
		ListNode* mid = NULL;
		ListNode* Rmid = NULL;
		ListNode* prevslow = NULL;
		while (fast && fast->next)
		{
			fast = fast->next->next;
			prevslow = slow;
			slow = slow->next;
		}
		prevslow->next = NULL;
		mid = slow;
		ListNode* curL = A;
		Rmid = Reverlist(mid);
		while (Rmid && curL)
		{
			if (Rmid->val != curL->val)
				return false;
			Rmid = Rmid->next;
			curL = curL->next;
		}
		//还原
		prevslow->next = Reverlist(Rmid);
		return true;
	}

};