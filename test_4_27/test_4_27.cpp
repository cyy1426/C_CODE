#include<stdio.h>
int rob(int* nums, int numsSize) {

	int i = 0;
	int sum1 = 0, sum2 = 0;
	while (i < numsSize)
	{
		sum1 = sum1 + nums[i];
		sum2 = sum2 + nums[i + 1];
		i = i + 2;
	}
	if (sum1 > sum2)
	{
		return sum1;
	}
	else
		return sum2;

}
int main()
{
	int arr[] = {2,7,9,3,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = rob(arr, sz);
	printf("%d", ret);
}