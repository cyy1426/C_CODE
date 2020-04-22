//#include <stdio.h>
//#include<assert.h>
//char* my_strstr(char* p1,char* p2)
//{
//	assert(p1 && p2);
//	char* cur = p1;
//	char* s1 = p1;
//	char* s2 = p2;
//	if (*s2 == '\0')
//		return p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbcdef";
//	char arr2[] = "bcd";
//	char* ret=my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("找不到子串");
//	else
//		printf("是子串");
//}
//struct s {
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	struct s arr1[] = { {"你",5},{"他",6} };
//	struct s arr2[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//}

//struct s {
//	char name[20] ;
//	int age;
//};
//void* my_memcpy(void* dest, void* source, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)source;
//		/*dest++;
//		source++;*/
//
//		dest= (char*)dest+1;
//		source =(char*)source + 1;
//		/*char* temp1=(char*)dest;
//		++temp1;
//		char* temp2=(char*)source;
//		++temp2;*/
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[5] = {0};
//	struct s arr3[] = { {"张狗",4} ,{"狸猫",5} };
//	struct s arr4[3] = {0};
//	my_memcpy(arr4, arr3, sizeof(arr3));
//}
#include <stdio.h>
#include<string.h>

//char* removeOuterParentheses(char* S)
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int len = strlen(S);
//	for (i = 0; i < len; i++)
//	{
//
//		int count1 = 0;
//		int count2 = 0;
//		for(j= i;j< len;j++)
//		{
//			if(S[j] == '(')
//			{
//				count1++;
//			}
//			else
//			{
//			count2++;
//			}
//			//确定最外层）的位置
//			if(count1 == count2)
//			{
//				for(a= j;a< len - 1;a++)
//				{
//					S[a] = S[a+ 1];
//				}
//				S[len - 1] = '\0';
//				len--;
//				break;
//			}
//		}
//		for(a= i;a< len- 1;a++)
//		{
//			S[a] = S[a+ 1];
//		}
//		S[len- 1] = '\0';
//		len--;
//		i = j- 2;
//	}
//	return S;
//}
//int main()
//{
//	char arr[] = "(())(()()()())";
//	printf("%s", removeOuterParentheses(arr));
//}
#include <stdio.h>
#include<string.h>
int MAX(int* arr2, int sz1)
{
	int i = 0;
	if (sz1== 1)
	{
		return -1;
	}
	int max = arr2[i+1];
	for (i = 0; i < sz1-1; i++)
	{
		if (max < arr2[i + 1])
			max = arr2[i+1];

	}
	return max;
}
int* replaceElements(int* arr, int arrSize, int* returnSize) {
	int i = 0;
	int* ret = arr;
	for (i = 0; i < arrSize; i++)
	{
		arr[i]=MAX(arr+i, arrSize-i);
	}
	*returnSize = arrSize;
	return ret;

}
//      后面五个挑  18
//      后面四个挑最大6
//      后面三个挑  最大6
int main()
{
	int arr[] = {18,56,3,55,6,2};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* num = 0;
	int* ret=replaceElements(arr, sz, num);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", ret[i]);
	}
}