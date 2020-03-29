#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define Easy_count 80

#define ROWS ROW+2
#define COLS COL+2
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set);
void Display(char Board[ROWS][COLS], int row, int col);
void Setmine(char Board[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);