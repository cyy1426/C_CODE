#include<stdio.h>
//int maxProfit(int* prices, int pricesSize)
//{
//	int i = 0, min = prices[0],max=0;//定义一个最大最小值
//	for (i = 0; i < pricesSize; i++)
//	{
//		if (min > prices[i])//进来就第一个判断去找最小值
//			min = prices[i];
//		else if (max < prices[i] - min)//持续不断的去计算下一个值与更新的最小值之差
//			max = prices[i] - min;//同时去保留这次最小值差的结果！！！
//	}
//	return max;
//}
int maxProfit(int* prices, int pricesSize)
{
	int i = 0, j = 0, max = 0, ret = 0;
	for (i = 0; i < pricesSize; i++)
	{
		for (j = i+1; j < pricesSize; j++)//两层for循环去找一个元素与下一个元素的差值的最大值
		{
			ret = prices[j] - prices[i];
			if (ret > max)
				max = ret;
		}
	}
	return max;
}

int main()
{
	int arr[] = {7,1,5,0,2,4};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d", maxProfit(arr,len));
}