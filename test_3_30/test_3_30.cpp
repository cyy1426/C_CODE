#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//int calc(int a)
//{
//	int num = 0;
//	if (a < 10)
//		return a;
//	else
//		return calc(a/10)+a%10;
//
//}
//int main()
//{
//	int a;
//	int num = 0;
//	scanf("%d",&a);
//	calc(a);
//	printf("%d",calc(a));
//	return 0;
//}
//int flower(int a)
//{
//	for (a = 1; a <10; a++)
//	{
//		//int num = pow(a, 2);
//		//printf("%d", num);
//		if (a < 10 && a == pow(a, 1))
//		{
//			
//			
//		}
//		/*else if (a >= 10 && a <= 99 && a == flower(a / 10) + flower(a % 10))
//			return a;*/
//			
//	}
//	return 0;
//}
//int main()
//{
//	int a=2;
//	flower(a);
//	printf("%d", flower(a));
//	return 0;
//
//}
int main()
{
	int i, j = 0;
	for (i = 0; i < 13; i++)
	{
		for (j = 1; j <13; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}