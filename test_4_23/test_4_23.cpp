#include <stdio.h>
int missingNumber(int* nums, int numsSize) {
		int i = 0;
		int sum1 = 0;
		int sum2 = 0;
		int min = nums[0], max = nums[0];
		for (i = 0; i < numsSize; i++)
		{
			sum1 += nums[i];
			sum2 += i;
		}//第一个循环去统计数组中内容的和以及数组下标的和以防止正常数组{0，1，2}的出现
		for (i = 0; i < numsSize; i++)
		{
			if (min >= nums[i])
				min = nums[i];

		}//第二个循环去找最小值
		for (i = 0; i < numsSize; i++)
		{
			if (max <= nums[i])
				max = nums[i];

		}//第三个循环去找最大值
		int ret = (min + max) * (numsSize+1) / 2;//求数组正常的和求和公式
		if (sum1 ==sum2)//正常放置，返回后一个元素
			return max + 1;
		else
			return ret - sum1;//找到缺失数字
	
}
int main()
{
	int arr[] = {1,0,2};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=missingNumber(arr, sz);
	printf("%d", ret);
}
