#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fib(int N) {
	if (N < 1)
		return 0;
	else if (N == 1)
		return 1;
	else
		return fib(N - 1) + fib(N - 2);

}
int main()
{
	int a = 0;
	scanf("%d",&a);
	printf("%d", fib(a));
}