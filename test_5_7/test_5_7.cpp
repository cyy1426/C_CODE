#include<stdio.h>
#include <math.h>
//每个非负整数 N 都有其二进制表示。例如， 5 可以被表示为二进制 "101"，11 可以用二进制 "1011" 表示，依此类推。注意，除 N = 0 外，任何二进制表示中都不含前导零。

//二进制的反码表示是将每个 1 改为 0 且每个 0 变为 1。例如，二进制数 "101" 的二进制反码为 "010"。

//给你一个十进制数 N，请你返回其二进制表示的反码所对应的十进制整数。
int bitwiseComplement(int N) {
	int i = 0,count=0;
	for (i = 0; i < 32; i++)//我的想法是去确定输入数的二进制的位数
	{
		if ((N >> i) && 1 != 0)//通过按位右移依次与1进行逻辑与的运算，当全部移完结果为0
		{
			count++;//所以此时的count结果为有效二进制位数

		}
	}
	int b = pow(2, count) - 1;//然后取b为2的位数次幂  -1
	return N^b;//位运算  异或得到结果!!!

}
int main()
{
	int a = 5;
	int ret=bitwiseComplement(a);
	printf("%d",ret);
}