#include<stdio.h>
//判断所列的点是不是在一条直线上。！

////哇  好久不看二维数组，全不会了---二维数组是意思数组的数组
int checkStraightLine(int coordinates[][2], int coordinatesSize, int* coordinatesColSize) //传过来一个二维数组接收的话必须明确列是多少！！
{
	double x = coordinates[1][0] - coordinates[0][0], y = coordinates[1][1] - coordinates[0][1];//其实和着就是一个六行两列的大矩阵   0就是第一列的x ， 1就是第二列的y
	                                                                                            ///求差算斜率！
	double k;
	int t = 0;//牛皮的地方定义一个k，去当一个斜率为 0 的判别条件！
	if (y == 0)
		t = 1;
	else
		k = x / y;
	for (int i = 1; i < coordinatesSize - 1; i++) {
		y = coordinates[i + 1][1] - coordinates[i][1];
		if (t && y)//------------------------------------------如果t=1，是设的直线k为0，但是你算的k不是0则与 为 假！！！
			return false;
		x = coordinates[i + 1][0] - coordinates[i][0];
		if (!t && k != x / y)//-------------------------------如果t=0，则设的直线k不为0，与之后的k比较且不等！！也为假！！
			return false;
	}
	return true;
}
int main()
{
	int arr[][2] = { { 1, 1 }, { 2, 2 }, { 3, 4 }, { 4, 5 }, { 5, 6 }, { 7, 7 } };
	int row = sizeof(arr) / sizeof(arr[1]);
	int col = sizeof(arr[1]) / sizeof(arr[1][1]);
	int ret = checkStraightLine(arr, row, &col);
	printf("%d\n", ret);
	return 0;
}