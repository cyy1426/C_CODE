#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//char buf[1024] = {0};
//	//FILE* pf = fopen("test.txt", "w");
//	//if (pf == NULL)
//	//{
//	//	return 0;
//	//}
//	////写文件
//	//fputs("hello\n",pf);
//	//fputs("world\n", pf);
//	//
//	//fclose(pf);
//	//pf = NULL;
//	char buf[1024] = {0};
//	fgets(buf);
//	fputs(buf);
//
//	return 0;
//}
bool* prefixesDivBy5(int* A, int ASize, int* returnSize)
{
	bool* p = (bool*)malloc(sizeof(bool)*ASize);
	int i = 0;
	*returnSize = ASize;
	int temp = 0;
	for (i = 0; i < ASize; i++)
	{
		temp = temp * 2 + A[i];
		if (temp % 5 == 0)
			p[i] = true;
		else
			p[i] = false;
		temp = temp % 10;

	}
	return p;
}