#include <stdio.h>
//返回一个数组中的多数元素
//借鉴大神想法  ---军队冲山坡
int majorityElement(int* nums, int numsSize)
{
	//先定义一个数组中第一个元素为山坡
	int key = nums[0];
	int count = 0;//计数
	for (int i = 0; i < numsSize; i++)
	{
		//相等则代表冲上去了，数加一//不等就减一，所以数量少的话迟早变 < 0！！！
		if (nums[i] == key)
			count++;
		else
			count--;

		if (count <= 0)//当小于0就换第二个山坡！！！
		{
			key = nums[i + 1];
		}

	}
	//得到众数！！！
	return key;
}
int main()
{
	int arr[] = {1,2,1,3,5,6,5,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d", majorityElement(arr, sz));
}