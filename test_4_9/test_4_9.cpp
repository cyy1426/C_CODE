﻿#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu
{
	char name[20];
	int age;
};
//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_f(const void* e1, const void* e2)
{
	return (int)*(float*)e1 - *(float*)e2;
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;

}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	 return strcmp(((struct stu*)e1)->name , ((struct stu*)e1)->name);
}

void test1()
{
	int arr[] = { 2,4,5,6,1,3,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}
void test2()
{
	float f[] = { 1.0,2.0,4.0,5.0,3.0,6.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_f);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f", f[i]);
	}
}
void test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
void test4()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	//int arr[] = { 2,4,5,6,1,3,7,8,9 };
	//test1();
	//float f[] = { 1.0,2.0,4.0,5.0,3.0,6.0 };
	//test2();
	//test3();
	test4();
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	
	
}