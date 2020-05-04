#include <stdio.h>
//char* mystrncpy(char* dest, char* src, size_t num)
//{
//	char* temp = dest;
//	int i = 0;
//	while (*src && num)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		num--;
//		if (num < src[i])
//			* dest = 0;
//	}
//	return temp;
//
//}
//int main()
//{
//	char arr1[20] = "sadf";
//	char arr2[] = "wrd";
//	printf("%s",mystrncpy(arr1,arr2,5));
//}
//char* mystrncpy(char* dst, const char* src, size_t n)
//{
//	int i;
//	for (i = 0; src[i] && i<n; i++)
//	{
//		dst[i] = src[i];
//	}
//
//	if (i<n)
//	{
//		dst[i] = 0;
//	}
//	return dst;
//}
//char* mystrncat(char* dest, char* src, size_t)
//{
//	char* temp = dest;
//	while (*dest++)
//	{
//		;
//	}
//	char* cur = dest;
//	while (*src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[20] = "sadf";
//	char arr2[] = "wrd";
//	printf("%s", mystrncat(arr1, arr2, 5));
//}
//#include<string.h>//模拟strstr  有则返回第一个是元素的下标/无则返回-1/空返回0
//int strStr(char* haystack, char* needle) {
//	int len1 = strlen(haystack);//先计算两个字符串的长度
//	int len2 = strlen(needle);
//	int i = 0, j = 0;
//	int flag = 0;
//	if (len2 == 0)
//		return 0;
//	if (len1 == 0)
//		return -1;
//	for (i = 0; i < len1; i++)//笨蛋方法直接两个for循环去寻找
//	{
//		flag = 0;//取一个标记
//		for (j = 0; j < len2; j++)
//		{
//			if (haystack[i + j] != needle[j])//如果怎么都找不到就让flag为1，然后break
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)//这个flag=0代表找到了返回下标i
//		{
//			return i;
//		}
//	}
//	return -1;//找不到返回-1；
//
//}
int main()
{
	int arr[] = {6,6,5,4};
	int sz = sizeof(arr) / sizeof(arr[0]);

}