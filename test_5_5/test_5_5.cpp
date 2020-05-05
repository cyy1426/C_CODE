#include<stdio.h>
//设计找零问题，5，10，20必须充足零钱。一杯东西五块钱
int lemonadeChange(int* bills, int billsSize) {
	int len = billsSize;
	int i = 0, five = 0, ten = 0;//去统计5 10 20的数量
	for (i = 0; i < len; i++)
	{
		if (bills[i] == 5)
			five++;//遇到5 就加一
		else if (bills[i] == 10)
		{
			five--;//遇到10的话  10加一  5减一
			ten++;
		}
		else if (bills[i] == 20)//遇到20 分情况
		{
			if (ten == 0)//没有10的话  就减去两个5
			{
				five--;
				five--;
			}
			else
			{           //有10就减10
				ten--;
			}
			five--;//再减5

		}//基于以上所有问题判断完毕
		if (five < 0 || ten < 0)//如果5或者10小于0了；代表找不了零钱，反0；
			return 0;
	}
	return 1;//成功返回1；
}
int main()
{
	int arr[] = {5,5,10};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d",lemonadeChange(arr,len));

}