#include "game.h"
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols;j++)
		{
			Board[i][j] = set;
		}
	}
}
void Display(char Board[ROWS][COLS], int row, int col)
{
	int i, j;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);  
		}
		printf("\n");
	}
}
void Setmine(char Board[ROWS][COLS], int row, int col)
{
	int count = Easy_count;
	while (count)
	{
		int x = rand()%  row + 1;
		int y = rand() % col + 1;
		if (Board[x][y] == '0')
		{
			Board[x][y] = '1';
			count--;
		}
	}
}
int getmine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1]-8*'0';


}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	while (win<row*col-Easy_count)
	{

		printf("�������Ų����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			if (mine[x][y] == '1')
			{
				printf("���ź�������\n");
				Display(mine, row, col);
				break;
			}
			else
			{
				//����  ������Χ������
				int count=getmine(mine, x, y);
				show[x][y] = count + '0';
				Display(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�������\n");
		}
	}
	if (win == row * col - Easy_count)
	{
		printf("��ϲ��ɹ�");
		Display(mine, row, col);
	}
}