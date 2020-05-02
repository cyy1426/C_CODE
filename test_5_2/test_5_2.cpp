#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSIZE 5000
void func(char* S, int i, char** re, int* returnSize)
{
	if (i < strlen(S))//进来的小于判断的数组长度开始进行变换
	{
		if (S[i] >= 'a' && S[i] <= 'z')//符合条件一
		{
			func(S, i + 1, re, returnSize);//递归看下一个个元素
			S[i] -= 32;//符合条件进行变换
			func(S, i + 1, re, returnSize);//中间被终止后继续递归
		}
		else if (S[i] >= 'A' && S[i] <= 'Z')
		{
			func(S, i + 1, re, returnSize);//同上
			S[i] += 32;
			func(S, i + 1, re, returnSize);
		}
		else
			func(S, i + 1, re, returnSize);//不符合的话不用变持续递归
	}
	else
	{
		re[*returnSize] = (char*)calloc(13, sizeof(char));//判断完毕后确定空间数大小
		strcpy(re[*returnSize], S);
		++(*returnSize);//长度加一
	}
}
char** letterCasePermutation(char* S, int* returnSize) {
	char** re = (char**)calloc(MAXSIZE, sizeof(char*));//动态分配内存空间
	*returnSize = 0;//先命动态空间数组个数为0

	func(S, 0, re, returnSize);//定义一个函数去判断--函数参数为所判断的数组，随机元素0（i），形成的动态数组，形成的数组大小
	return re;
}
int main()
{
	char arr[] = "asd5d";
	int* k = 0;
	printf(*(letterCasePermutation(arr, k)));

}