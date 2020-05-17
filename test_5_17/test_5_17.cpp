#include<stdio.h>
#include<stdlib.h>
#include <string.h>

////这个题去寻找一个数组中的重复元素并且返回，两层for循环容易超时，这里使用了新建数组组合的方法
int findRepeatNumber(int* nums, int numsSize) {
	// 这里不能写 int arr[numsSize],因为未考虑到数组为空的情况
	int* arr = (int*)calloc(numsSize, sizeof(int));//动态开辟一个新数组arr
	int sz1 = 0;
	/* memset 用来将某段内存空间设置为某个初始值
	 * 原型：void *memset(void *buffer, int c, int count)
	 * buffer：指针或是数组  c：赋给buffer的值  count：buffer的长度
	 */
	memset(arr, 0, sizeof(int) * numsSize);   // 这里也可以是 sizeof(arr)   给arr全部赋初值为0
	for (int i = 0; i < numsSize; i++)
	{
		arr[nums[i]]++;//arr[num[i]]数组合并指的是判断arr数组中是否出现一样重复的元素，有则长度加一
		if (arr[nums[i]] > 1)//俩数组结合指的就是元素不同的个数?
		{
			//sz1 = sizeof(arr) / sizeof(arr[0]);
			return nums[i];
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 1,2,3,2,3,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d", findRepeatNumber(arr, sz));
}