/**
 * Note: The returned array must be malloced, assume caller calls free().
 *///动态数组返回一个等于目标值的两个数字组成的数组
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int* p = (int*)malloc(sizeof(int) * 2);
	int i = 0, j = 0, a = 0, b = 0;
	int left = 0, right = numsSize - 1;//用指针
	while (left < right)//while循环判定条件 ---左小于右
	{
		if (nums[left] + nums[right] == target)
		{
			a = nums[left];
			b = nums[right];
			break;//是直接break！！
		}
		else if (nums[left] + nums[right] < target)
		{
			left++;
		}
		else
		{
			right--;
		}
	}
	p[0] = a;
	p[1] = b;
	*returnSize = 2;
	return p;

}
int main()
{
	int arr = {s}
}