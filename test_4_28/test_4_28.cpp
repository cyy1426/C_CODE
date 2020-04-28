#include<stdio.h>
#include<stdlib.h>
//给定长度为 2n 的数组, 你的任务是将这些数分成 n 对, 例如 (a1, b1), (a2, b2), ..., (an, bn) ，使得从1 到 n 的 min(ai, bi) 总和最大。
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int arrayPairSum(int* nums, int numsSize) 
{
	qsort(nums,numsSize,sizeof(nums[0]),cmp_int);
	int sum = 0;
	int i = 0;
	while (i < numsSize)
	{
		sum += nums[i];
		i = i + 2;
	}
	return sum;
}
int main()
{
	int arr[] = { 1,4,3,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=arrayPairSum(arr, sz);
	printf("%d", ret);
}