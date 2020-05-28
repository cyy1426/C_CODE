#include<stdio.h>
//查询数组中连续1 的个数
int findMaxConsecutiveOnes(int* nums, int numsSize)
{
	///思路是定义一个最大值，依次遍历数组，对1计数，如果不是1的话就立刻比较！！
	int i = 0, count = 0, max = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] == 1)
			count++;
		else
		{
			//不是1就立刻比较，把max初始0和count比较，然后把最大的1的个数赋值给max，对count清0，继续统计之后1的个数再比较！
			max = max > count ? max : count;
			count = 0;
		}
	}
	///如果全是1的情况！！
	max = max > count ? max : count;
	return max;
}
int main()
{
	int arr[] = {1,1,1,0,0,0,1,1,1,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d", findMaxConsecutiveOnes(arr, sz));
}


