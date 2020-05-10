#include<stdio.h>
int maxProfit(int* prices, int pricesSize) //编程实现一个数组的邻近两项求和
{
	int i = 0, sum = 0, ret = 0;
	for (i = 0; i < pricesSize - 1; i++)//要点是提前把范围减一，以免超出范围
	{

		ret = prices[i + 1] - prices[i];//计算差
		if (ret > 0)
		{
			sum += ret;//计算差值！
		}

	}
	return sum;

}
int main()
{
	int arr[] = {1,7,5,3,6};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d",maxProfit(arr,len));
}