#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void swaparr(int* arr,int sz)
//{
//	int* end = &arr[sz - 1];
//	int* start = arr;
//	while (start < end)
//	{
//		while ((start < end) && (*start) % 2 == 1)
//		{
//			start++;
//		}
//		while ((start < end) && (*end) % 2 == 0)
//		{
//			end--;
//		}
//		if (start < end)
//		{
//			int temp = *start;
//			*start = *end;
//			*end = temp;
//		}
//	}
//
//
//}
int main()
{
	//int arr[] = { 1,5,6,7,8,9,0,2,3 };
	/*int sz = sizeof(arr) / sizeof(arr[0]);
	swaparr(arr, sz);*/
	/*int money = 20, empty = 0;
	int total = 0;
	empty = money;
	total = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;

	}
	printf("%d",total);
	return 0;*/
	int line = 0;
	int i = 0;
	scanf("%d",&line);
	for (int i = 0; i < line; i++)
	{
		int j = 0;
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < line-1; i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 *(line-1-i) -1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}