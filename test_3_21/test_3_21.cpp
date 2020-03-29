#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("********************************\n");
	printf("***1.玩游戏****2.退出***********\n");
	printf("********************************\n");
}
void game()
{
	//1  布置好的雷的信息
	char mine[ROWS][COLS] = {0};
	//2   排查出雷的信息
	char show [ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//Display(mine, ROW, COL);
	Display(show, ROW, COL);
	 //布置雷
	Setmine(mine, ROW, COL);
	Display(mine, ROW, COL);
	//扫雷
	findmine(mine,show,ROW,COL);
	 
}
void test()
{

	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏，结束\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

}
int main()
{
	test();

	return 0;
}