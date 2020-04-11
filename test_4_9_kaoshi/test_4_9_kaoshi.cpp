#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int numb(int a)
//{
//	int number = 0;
//	while (a)
//	{
//		if (a % 2 == 0)
//		{
//			a /= 2;
//			number++;
//		}
//		else
//		{
//			a -= 1;
//			number++;
//		}
//	}
//		return number;
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = numb(a);
//	printf("%d",b);
//}
int mul(int a)
{
	if (a < 10 && a>0)
		return a;
	else
		return (a % 10) * (mul(a / 10));
}
int sum(int a)
{
	if (a < 10 && a>0)
		return a;
	else
		return a % 10 + sum(a / 10);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int b = mul(a);
	int c = sum(a);
	printf("积%d\n", b);
	printf("和%d\n", c);
	printf("差%d",b-c);
}
