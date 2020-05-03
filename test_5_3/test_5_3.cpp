﻿#include <stdio.h>
int numRookCaptures(char** board, int boardSize, int* boardColSize) {
	int X, Y;
	int cnt = 0;
	//第一个for循环去找车所在的位置赋值给X ，Y
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j] == 'R') {
				X = i;
				Y = j;
			}
		}
	}
	//向左找p，有吃count加1，遇见B就break
	for (int i = (Y - 1); i >= 0; i--) {
		if (board[X][i] == 'p') {
			cnt++;
			break;
		}
		if (board[X][i] == 'B') {
			break;
		}
	}
	//向右找p，有吃count加1，遇见B就break
	for (int i = (Y + 1); i < 8; i++) {
		if (board[X][i] == 'p') {
			cnt++;
			break;
		}
		if (board[X][i] == 'B') {
			break;
		}
	}
	//向上找p，有吃count加1，遇见B就break
	for (int i = (X - 1); i >= 0; i--) {
		if (board[i][Y] == 'p') {
			cnt++;
			break;
		}
		if (board[i][Y] == 'B') {
			break;
		}
	}
	//向下找p，有吃count加1，遇见B就break
	for (int i = (X + 1); i < 8; i++) {
		if (board[i][Y] == 'p') {
			cnt++;
			break;
		}
		if (board[i][Y] == 'B') {
			break;
		}
	}
	return cnt;
}
int main()
{

}