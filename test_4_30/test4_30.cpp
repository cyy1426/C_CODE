#include <stdio.h>
#include<string.h>
int numJewelsInStones(char* J, char* S) {
	int sz1 = strlen(J);
	int sz2 = strlen(S);
	int i = 0, j = 0, count = 0;
	for (i = 0; i < sz1; i++)
	{
		for (j = 0; j < sz2; j++)
		{
			if (J[i] == S[j])
				count++;
		}
	}
	return count;

}
int main()
{
	char arr1[] = "sada";
	char arr2[] = "sdasdasdadasda";
	printf("%d", numJewelsInStones(arr1,arr2));
}
