#include<stdio.h>
#include<stddef.h>
//模拟实现求偏移量
//struct S 
//{
//	char a;
//	int b;
//	char c;
//};
//#define OFFSETOF(struct_name,member_name)(int)&(((struct_name*)0)->member_name)//用宏定义去定义它！给0强制类型转换，然后去看结构体成员的地址相当于偏移量！
////int main()
////{
////	printf("%d\n",offsetof(struct S,a));
////	printf("%d\n", offsetof(struct S, b));
////	printf("%d\n", offsetof(struct S, c));
////}
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//}
int missingNumber(int* nums, int numsSize) {
	int sum = 0;
	sum = ((0 + numsSize) * (numsSize + 1)) / 2;
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		sum = sum - nums[i];
	}
	return sum;
}
int main()
{
	int arr[] = {3,0,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d",missingNumber(arr,sz));
}