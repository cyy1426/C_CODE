#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d",&a,&b);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((((a^b)>>i)&1) == 1)
//			count++;
//	}
//
//void printsigle(int a)
//{
//	int i = 0;
//	for (i = 31; i >=1; i-=2)
//	{
//		printf("%d",(a >> i) &1);
//	}
//
//}
//void printdouble(int a)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (a >> i) &1);
//	}
//	
//
//}
//void count1(int a)
//{
//	int i = 0, count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d",count);
//}
//void swap(int a, int b)
//{
//	a = a ^ b;
//	b = b ^ a;
//	a = a ^ b;
//	printf("变换后%d%d", a, b);
//}
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d", *(arr + i));
//}
void bubblesort(int* arr, int sz)//冒泡排序是两个for嵌套使用
                                 //而且是相邻两个变量之间进行比较！
{
	int i = 0,temp=0;
	for (int j = 0; j < sz-1; j++)
	{
		int ischange = 0;
		for (i = 1; i < sz-j; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;

			}
			ischange = 1;//这一趟进行冒泡排序的话就制1；
		}
		if (ischange == 0)//若为0则代表此时已经有序，一个泡也就是相邻的都没有比较
																	///故直接退出！
			break;
	}
}
int main()
{
	int arr[] = { 1,8,7,5,3,6,9,2};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr,sz);
	/*int a = 0,b=0;
	scanf("%d%d",&a,&b);
	printf("变换前%d%d", a, b);
	swap(a,b);*/
	
}
	/*while (a && b)
	{
		int m = a & 1;
		int n = b & 1;
		if (m != n)
		{
			count++;
		}
		a /= 2;
		b /= 2;
	}
	while (a)
	{
		count++;
		a /= 2;
	}
//	while (b)
//	{
//		count++;
//		b /= 2;
//	}*/
//	printf("%d",count);
//}