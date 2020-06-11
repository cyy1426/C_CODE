#include<stdio.h>
#include<string.h>
#include<stdlib.h>
///qsort排序字符串！！！
int cmp(const void* a, const void* b)
{
	return *(char*)a - *(char*)b;
}


char findTheDifference(char* s, char* t) {
	int size1 = strlen(s);
	int size2 = strlen(t);
	qsort(s, size1, sizeof(s[0]), cmp);
	qsort(t, size2, sizeof(t[0]), cmp);
	char temp = 0;
	int i = 0;
	for (i = 0; i < size1; i++)
	{
		if (s[i] != t[i])
			return t[i];
	}

	return t[size2 - 1];
}
int main()
{
	char s[] ="abcde";
	char t[] = "adccbe";
	printf("%c", findTheDifference(s, t));
}