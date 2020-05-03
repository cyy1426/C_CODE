#include<stdio.h>
#include<math.h>
int maximum69Number(int num) {
	int count = 0;
	int i = num;
	//判断输入的数的位数记得赋值给新数，防止混淆
	while (num)
	{

		num = num / 10;
		count++;
	}
	count = count - 1;//判断的位数要减一，方便之后计算
	int b = pow(10, count) - 1;//判断是否全为9，是的话就返回
	int arr = i / pow(10, count);//取第一位
	if (b == i)
		return i;
	else if(arr == 6)//判断是否为6
	{
		return i + 3 * pow(10, count);//是即变9
	}
	else 
		return (arr * pow(10, count)) + maximum69Number(i - 9 * pow(10, count));//递归调用函数去看去除首位×10个数的数依次判断！！

		
		
    

}
int main()
{
	int a = 69;
	int ret=maximum69Number(a);
	printf("%d",ret);
}
//int change(int i)
//{
//	int count = 0;
//	int a = i;
//	while (a)
//	{
//
//		a = a / 10;
//		count++;
//	}
//	count = count - 1;
//	int arr = i / pow(10, count);
//	if (arr == 6)
//	{
//		return i + 3 * pow(10, count);
//	}
//	else
//		return (arr * pow(10, count)) + change(i - 9 * pow(10, count));
//	//6999-   6  *1000
//	 //969-9*100
//}
//int maximum69Number(int num) {
//	int count = 0;
//	int i = num;
//	while (num)
//	{
//
//		num = num / 10;
//		count++;
//	}
//	count = count - 1;
//	int b = pow(10, count) - 1;
//	if (b == i)
//		return i;
//	else
//	{
//		int a = change(i);
//		return a;
//	}
//
//}