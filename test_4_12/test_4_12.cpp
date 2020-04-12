#include<stdio.h>
void oushi(int* arr, int sz)
{
	int i = 0;
	int count=0;
	for (i = 0; i < sz ; i++)
	{
		int number = 1;
		while (arr[i] / 10 != 0)
		{
			arr[i] = arr[i] / 10;
			number++;
		}
		if (number % 2 == 0)
			count++;
		
	}
	printf("%d", count);
}
int main()
{
	int arr[] = { 15,56,4545,456 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	oushi(arr, sz);
}