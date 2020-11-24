#include <stdio.h>
//void yanghuitriangle(int n)
//{
//	int arr[30][30] = { 1 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//		for (int j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
int main()
{/*
	5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：



		A选手说：B第二，我第三；

		B选手说：我第二，E第四；

		C选手说：我第一，D第二；

		D选手说：C最后，我第三；

		E选手说：我第四，A第一；

		比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。*/
	int arr[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		if ((arr[1] == 2) + (arr[0] == 3) == 1 &&
			(arr[1] == 2) + (arr[4] == 4) == 1 &&
			(arr[2] == 1) + (arr[3] == 2) == 1 &&
			(arr[2] == 5) + (arr[3] == 3) == 1 &&
			(arr[0] == 1) + (arr[4] == 4) == 1)
			break;

	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d",arr[i]);
	}
	/*yanghuitriangle(5);*/
	/*A说：不是我。

		B说：是C。

		C说：是D。

		D说：C在胡说

		已知3个人说了真话，1个人说的是假话。*/
	/*int arr[4] = {0};
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		arr[i] = 1;
		if ((arr[0] == 0) + (arr[2] == 1) + (arr[3] == 1) + (arr[3] != 0) == 3)
			break;
		arr[i] = 0;

	}
	printf("%d",i);*/
}
//int main()
//{
//	int murder[4] = { 0 }; //默认4个人都不是凶手
//
//	int i;
//	for (i = 0; i < 4; i++) //遍历假设四个人中的某个人是凶手
//	{
//		murder[i] = 1; //假设某个人是凶手
//		if ((murder[0] != 1) +
//			(murder[2] == 1) +
//			(murder[3] == 1) +
//			(murder[3] != 1) == 3)
//		{
//			break; //满足就代表就是你了！
//		}
//		murder[i] = 0; //不满足还他清白
//	}
//
//	putchar('A' + i); //打印凶手的编号。我们的编号是0 1 2 3，加上'A'后变成A B C D。
//	return 0;
//
	