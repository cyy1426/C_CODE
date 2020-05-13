/**
 * Note: The returned array must be malloced, assume caller calls free().
 难度简单37收藏分享切换为英文关注反馈我们要把给定的字符串 S 从左到右写到每一行上，每一行的最大宽度为100个单位，如果我们在写某个字母的时候会使这行超过了100 个单位，那么我们应该把这个字母写到下一行。我们给定了一个数组 widths ，这个数组 widths[0] 代表 'a' 需要的单位， widths[1] 代表 'b' 需要的单位，...， widths[25] 代表 'z' 需要的单位。

现在回答两个问题：至少多少行能放下S，以及最后一行使用的宽度是多少个单位？将你的答案作为长度为2的整数列表返回。
\
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* numberOfLines(int* widths, int widthsSize, char* S, int* returnSize) {
	int* p = (int*)malloc(sizeof(int) * 2);
	*returnSize = 0;
	int i = 0, j = 0;
	int len2 = strlen(S), total = 0;
	for (i = 0; i < len2; i++)//计数  都是英文转换为数字  ，ASCII值的转换
	{
		if (total / 100 == (total + widths[S[i] - 'a']) / 100 || ((total + widths[S[i] - 'a']) % 100 == 0))
			total += widths[S[i] - 'a'];
		else
		{
			total = ((total / 100 + 1) * 100 + widths[S[i] - 'a']);
		}
	}

	p[0] = total / (100) + 1;
	p[1] = total % 100;//动态数组赋值，明确几行给啥就可以这样一个元素一个元素的给
	*returnSize = 2;//重点是得给返回大小确定了

	return p;
}
int main()
{
	int width[] = { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
	char S[] = "abcdefghijklmnopqrstuvwxyz";
	int len1 = sizeof(width) / sizeof(width[0]);
	int* p = 0;
	int* s=numberOfLines(width,len1,S,p);
	printf("%s",s);
}