#include<stdio.h>
#include<string.h>
#include<ctype.h>
//翻转字符串  但是不是字符的话就不用动了
//这里用到了 isalpha 函数  头文件是 <ctype.h>
char* reverseOnlyLetters(char* S) {
	int len = strlen(S);
	char left = 0;
	char right = len - 1;
	while (left <= right)
	{
		////////////////////////key!!只要它不是字母就直接指针加减 不用变！！！
		while (left < right && !isalpha(S[left])) {
			left++;
		}
		while (left < right && !isalpha(S[right])) {
			right--;
		}

		char temp = S[right];
		S[right] = S[left];
		S[left] = temp;
		left++;
		right--;
	}
	return S;

}
int main() 
{
	char s[] = "asda-sdad-sdw";
	printf("%s\n", s);
	printf("%s", reverseOnlyLetters(s));

}