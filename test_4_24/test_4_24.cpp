#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* temp = dest;
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}

	}
	return temp;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	my_memmove(arr1, arr1+2, 5);
	long d = 9;
	printf("%d", sizeof(d));
}