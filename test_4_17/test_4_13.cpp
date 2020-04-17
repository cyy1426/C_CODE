#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<assert.h>
#include <string.h>
//void leftmove(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左转一个字符
//		char temp = *arr;
//		//前移
//		int j = 0;
//		for (j = 0; j < len; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//换
//		*(arr + len - 1) = temp;
//	}
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int k = 0;
//	scanf("%d", &k);
//	leftmove(arr, k);
//	printf("%s", arr);
//}
//  abcdef
//  bafedc
//  cdefab
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void leftmove(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int k = 0;
//	scanf("%d", &k);
//	leftmove(arr, k);
//	printf("%s", arr);
//}
int isleft(char* s1, char* s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		leftmove(s1, 1);
		int ret = strcmp(s1, s2);
		if (ret == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefrb";
	int ret = isleft(arr1, arr2);
	if (ret == 1)
	{
		printf("YEs");

	}
	else
		printf("NO");
	return 0;
}