#include<stdio.h>
///寻找数组中元素等于出现次数的数！
int findLucky(int* arr, int arrSize) {
	int a[500] = { 0 };
	int max = 0;
	//*****重点是这个统计词频，这个你见过一次了，你还是不会！小辣鸡啥也不是！！
	for (int i = 0; i < arrSize; i++)
	{
		//就是先去定义一个 整型数组a[]
		a[arr[i]]++;//然后用数组去包含要求的数组就是统计数组出现的次数了！！！
	}
	for (int i = 0; i < arrSize; i++)
	{
		if (a[arr[i]] == arr[i])
		{
			///一个for循环遍历去判断所属的频次是否和数相等
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
	}
	if (max != 0)
	{
		return max;
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,3,3,4,4,4,4};
	int a = sizeof(arr) / sizeof(arr[0]);
	printf("%d", findLucky(arr, a));
}