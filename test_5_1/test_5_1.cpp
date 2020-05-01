#include<stdio.h>
#include<stdlib.h>
//返回一个数组数组元素为可以整除各个位上的数的集合
int* selfDividingNumbers(int left, int right, int* returnSize) {
	int i = 0;
	int* a = (int*)malloc((right - left)*sizeof(int));//动态调用一个空间大小为测定的范围的数组大小
	////////////////////////////////////////////////////malloc只有一个参数且返回类型为void*，需要强制转换！！！
	*returnSize = 0;//先将返回数组长度置零
	//判断循环条件从头到尾
	while (left <= right)
	{
		int flag = 0, temp = left;//定义一个flag标记此数为满足条件数
		//用temp从头开始复制进行
		while (temp > 0)
		{
			int b = temp % 10;
			if (b == 0 || left % b != 0)
			{
				flag = 1;//判断否置一则不进行数组元素的扩张
				break;
			}
			temp = temp / 10;
		}
		if (flag == 0)
		{//满足条件数组开始复制且动态加一
			a[i] = left;
			i++;
			(*returnSize)++;//动态数组长度加一
		}
		left++;
	}
	return a;
	free(a);//释放数组

}
int main()
{
	
}