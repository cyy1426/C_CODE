#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
//int isprime(int i)
//{
//	int j = 0;
//	for (j =2; j < sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//		
//
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = isprime(i);
//		if (ret == 1)
//			printf("是素数");
//		else
//			printf("不是");
//	
//}
//void isyear(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0||i%400==0)
//	{
//		printf("是闰年");
//	}
//	else
//		printf("不是");
//}
//int main()
//{
//	int year = 0;
//	//scanf("%d", &year);
//	do {
//
//		scanf("%d", &year);
//
//		isyear(year);
//	} while (year);
//}
#include <assert.h>
//int mystrlen(char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret=mystrlen(arr);
//	printf("%d", ret);
//}
//char* mystrcpy(char* dest, const char* source)
//{
//	assert(dest && source);
//	char* ret = dest;
//	while (*dest++ = *source++)
//	{
//		;
//	}
//	return ret;
//
//
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "woleile";
//	mystrcpy(arr1, arr2);
//	printf("%s", arr1);
//}
//int mystrcmp(char* arr1, char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1 != '\0')
//	{
//		if (*arr1 < *arr2)
//			return -1;
//		else if (*arr1 > * arr2)
//			return 1;
//		else
//		{
//			arr1++;
//			arr2++;
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdefh";
//	int ret=mystrcmp(arr1, arr2);
//	if (ret == 1)
//		printf("arr1大");
//	else if (ret == -1)
//		printf("arr2大");
//	else
//		printf("一样大");
//	
//}
#include<string.h>
//char* mystrcat(char* arr1, char* arr2)
//{
//	assert(arr1 && arr2);
//	char* temp = arr1;
//	int len = strlen(arr1);
//	while (*arr2 != '\0')
//	{
//		*(arr1 + len) = *arr2;
//		arr1++;
//		arr2++;
//	}
//	return temp;
//
//}
//int main()
//{
//	char arr1[30] = { "abcdef" };
//	char arr2[] = { "qwer" };
//	mystrcat(arr1, arr2);
//	printf("%s", arr1);
//}
void rotal(char* arr,int k)
{
	int len = strlen(arr);
	int i=0;
	char temp = 0;
	for (i = 0; i < k; i++)
	{
		temp = *arr;
		int j = 0;
		for (j = 0; j < len; j++)
		{
			*(arr + j) = *(arr+j+1);
		}
		*(arr + len - 1) = temp;
	}


}
int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	rotal(arr, k);
	printf("%s", arr);

}