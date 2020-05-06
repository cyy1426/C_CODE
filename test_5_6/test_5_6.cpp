#include<stdio.h>
#include<string.h>
//编写一个函数来查找字符串数组中的最长公共前缀。如果不存在公共前缀，返回空字符串 ""。
char* longestCommonPrefix(char strs[][30], int strsSize) //二维数组传参不太一样，这里用arr[][必须有]；列不可省略！！！
{
	if (strsSize == 0)//如果长度等于 0，说明啥也没有
		return 0;
	else if (strsSize == 1)//长度等于1，代表就一个字符串！！返回即可！
		return strs[0];
	int i = 0;//看成二维数组 的行
	int a = strsSize;
	int b = strlen(strs[0]);//计算第一个元素的长度即可，因为它结束了也就没有相同的了！
	int j = 0;//看成二维数组 的列
	int count = 0;
	for (i = 0; i < a - 1; i++)//这里循环条件a-1；是因为要和下一行进行比较，不减一则超出范围
	{
		count = 0;//必须在函数体内定义count
		for (j = 0; j < b; j++)
		{

			if (strs[i][j] != strs[i + 1][j])//开始行之间的比较，第一个就不同则为0；一旦不同b位置则为刚好不同位置
			{
				b = count;
				break;
			}
			else
			{
				count++;//相同个数就加；
			}
		}
	}
	strs[0][b] = '\0';//让其为/0从而输出截止！！
	if (count == 0)
	{
		return 0;
	}
	else
	{
		return strs[0];
	}


}
int main()
{
	char arr[][30] = { {"stephtn"},{"steth"},{"stefp" } };//相当于定义一个二维数组
	int sz = sizeof(arr) / sizeof(arr[0]);//得到的是二维数组里面几个元素！！
	printf("%d",sz);
	char* ret = longestCommonPrefix(arr,sz);
	printf("%s",ret);
}