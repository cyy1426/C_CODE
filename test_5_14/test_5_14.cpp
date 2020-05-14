#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//藏分享切换为英文关注反馈给定两个由小写字母构成的字符串 A 和 B ，只要我们可以通过交换 A 中的两个字母得到与 B 相等的结果，就返回 true ；否则返回 false 。

int cmp_char(const void* e1, const void* e2)//qsort排序字符串
{
	return strcmp((char*)e1, (char*)e2);

}
bool buddyStrings(char* A, char* B) {
	int len1 = strlen(A);
	int len2 = strlen(B);
	int i = 0, a = 0, b = 0, count = 0;
	if (len1 != len2 || len1 == 0)//判断长短是否相同或者是否为0
		return false;
	if (strcmp(A, B) == 0)//比较字符串是否一致
	{
		qsort(A, len1, sizeof(char), cmp_char);//排序
		for (i = 0; i < len1 - 1; i++)
		{
			if (A[i] == A[i + 1])//确定字符串完全一致的前提下，就可以只盼断前俩就行！！！
				return true;
		}
		return false;//不同就返回false
	}
	for (i = 0; i < len1; i++)//去看俩字符串不同的个数的判别！
	{
		if (A[i] != B[i])
		{
			count++;

			if (count == 1)
			{
				a = i;//a和b记录不同的位置！
			}
			else if (count == 2)
			{
				b = i;
			}
			else if (count > 2)
			{
				return false;
			}
		}
	}
	if (A[a] == B[b] && A[b] == B[a])
		return true;
	else
		return false;

}
int main()
{

}