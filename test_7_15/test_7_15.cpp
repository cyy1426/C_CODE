///拷贝一个链表带指针域和随机域的！！！

/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct TreeNode *next;
 *     struct TreeNode *random;
 * };
 */
typedef struct Node Node;
Node* buynode(int val)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	if (NULL == newnode)
		return NULL;
	newnode->val = val;
	newnode->next = NULL;
	newnode->random = NULL;
	return newnode;


}
struct Node* copyRandomList(struct Node* head) {
	if (NULL == head)
		return NULL;



	//1  在原链表中每个节点后插入值相等的结点
	Node* cur = head;
	Node* newnode = NULL;

	while (cur)
	{
		Node* newnode = buynode(cur->val);

		newnode->next = cur->next;
		cur->next = newnode;
		cur = newnode->next;
	}
	//2  给新插入的结点的随即指针域赋值
	cur = head;
	while (cur)
	{
		newnode = cur->next;
		if (cur->random)
		{
			newnode->random = cur->random->next;
		}
		cur = newnode->next;
	}
	//3  将新结点从链表上拆下来
	Node* newhead = head->next;
	cur = head;
	while (cur->next)
	{
		newnode = cur->next;
		cur->next = newnode->next;
		cur = newnode;
	}
	return newhead;
}