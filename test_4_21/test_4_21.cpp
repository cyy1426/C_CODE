#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#inlcude <cerron.h>
//int main()
//{
//	char arr[] =  "stephen@Cuirry.fmvp" ;
//	char p[] = { "@."};
//	char* q = p;
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	
//}
//int main()
//{
//	char* str = strerror(2);
//	printf("%s", str);
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
#include <assert.h>
char* my_strstr(char* p1, char* p2)
{
	assert(p1 && p2);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (*p2 == '\0')
		return p1;
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cur;
		cur++;
	}
}
int main()
{
	/*char* arr1 = "abcdef" ;
	char* arr2 =  "cd" ;*/
	char arr1[] = { "abcdef" };
	char arr2[] = { "cd" };
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("字串不存在");
	else
		printf("是字串");

}