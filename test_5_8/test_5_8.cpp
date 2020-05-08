#include<stdio.h>
#include<stdlib.h>
//对每一个孩子，检查是否存在一种方案，将额外的 extraCandies 个糖果分配给孩子们之后，此孩子有 最多 的糖果。注意，允许有多个孩子同时拥有 最多 的糖果数目。
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
	bool* p = (bool*)malloc(sizeof(bool) * candiesSize);//动态定义一个bool类型的数组去返回判断结果true/false
	int i = 0, max = candies[0];
	*returnSize = 0;
	for (i = 0; i < candiesSize; i++)//一个循环去求最大值
	{
		if (max < candies[i])
		{
			max = candies[i];
		}
	}
	for (i = 0; i < candiesSize; i++)//这个循环去看元素变化后是否为最大值
	{
		if (candies[i] + extraCandies >= max)
		{
			p[i] = true;//是则 给动态数组赋值 true
		}
		else
		{
			p[i] = false;//否 则false
		}
		*returnSize = candiesSize;;///key  让返回数组大小等于判断的数组大小
	}
	return p;
}
int main()
{
	int arr1[] = { '2','3','5','1','3' };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	int arr2 = 3;
	printf("&d", kidsWithCandies(arr1,len,arr2,(int*)len));
}