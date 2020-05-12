#include<stdio.h>
//一个二分法查找在数组中查询所查找数的下标然后返回
int two(int* arr, int len, int b)
{
	int left = 0, right = len - 1;//定义左右下标
	while (left <= right)
	{
		int ret = (left + right) / 2;//二分法取左加右的一半！！
		if (b == arr[ret])
			return ret;
		else if (b > arr[ret])
			left = ret + 1;
		else
			right = ret - 1;
	}
	return -1;
}
int main()
{
	int arr[] = {1,3,5,6,7,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int b = 6;
	int c=two(arr, sz, b);
	printf("%d",c);
}