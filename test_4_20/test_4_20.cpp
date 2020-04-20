#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int find(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else 
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret = find(arr, k, 3, 3);
//	if (ret == 1)
//		printf("找到了");
//	//printf("下标是%d%d", arr);
//	else
//		printf("找不到");
//}
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++) 
//		{
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1
//							)
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//}
//void change(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	change(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		printf("%d", arr[i]);
//	}
//	
//}
//20
//20   10   5  2  2
//int main()
//{
//	int money = 0;
//	int count = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	count = money;
//	empty = money;
//	while (empty>=2)
//	{
//		count+=empty/ 2;
//		empty = empty / 2 + empty % 2;
//
//	}
//	//count = count + count;
//	printf("%d", count);
//}
#include<math.h>
//void flower(int i)
//{
//	i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;//位数
//		int temp = i;
//		int sum = 0;
//		while (temp / 10)
//		{
//			n++;
//		}
//		//计算i位的每位幂次方的和
//		temp = i;
//		while (temp)
//		{
//			temp = temp % 10;
//			sum +=(int) pow(temp, n);
//			temp /= 10;
//		}
//		//判断是否相等
//		if (sum == i) 
//		{
//			printf("%d", i);
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;//位数
//		int temp = i;
//		int sum = 0;
//		while (temp / 10)
//		{
//			n++;
//			temp = temp / 10;
//		}
//		//计算i位的每位幂次方的和
//		temp = i;
//		while (temp)
//		{
//			sum += (int)pow(temp%10, n);
//			temp /= 10;
//		}
//		//判断是否相等
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
int main()
{
	int line = 0;
	scanf("%d", &line);
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下部分
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		//打印空格
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}