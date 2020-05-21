#include <stdio.h>
int num(int* arr, int sz)
{
	int i = 0, count = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[count] != arr[i])//count是一个确定位置的信息  不等就复制  等的话不进去   1  1 2 2  -》 1 2 2 2
		{
			arr[count++] = arr[i];
		}
	}
	return ++count;
}
int main()
{
	int arr[] = {0,1,2,2};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d",num(arr,sz));
}