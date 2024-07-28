#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	printf("-------------扫雷--------------\n");
	for (j = 0; j <= rows;j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= rows;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= cols;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------扫雷--------------\n");
}


void setmine(char board[ROWS][COLS], int rows, int cols)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % rows + 1;
		int y = rand() % rows + 1;
		
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}
}


int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (board[x + i][y + j] == '1')
				count++;
		}
	}
	return count;
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	printf("请输入排查雷的坐标:>");
	scanf("%d %d", &x, &y);
	int win = 0;
	while (win<rows*cols-EASY_COUNT)
	{
		if (x >= 1 && x <= rows && y >= 1 && y <= cols)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已被排查\n");

			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//不是雷进行统计
				{
					win++;
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//转换成数字字符
					DisplayBoard(show, ROW, COL);
				}
			}

		}
		else
		{
			printf("输入坐标非法\n");
		}
	}
	if (win == rows * cols - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
	
}
