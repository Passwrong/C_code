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
	printf("-------------ɨ��--------------\n");
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
	printf("-------------ɨ��--------------\n");
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
	printf("�������Ų��׵�����:>");
	scanf("%d %d", &x, &y);
	int win = 0;
	while (win<rows*cols-EASY_COUNT)
	{
		if (x >= 1 && x <= rows && y >= 1 && y <= cols)
		{
			if (show[x][y] != '*')
			{
				printf("�������ѱ��Ų�\n");

			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//�����׽���ͳ��
				{
					win++;
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//ת���������ַ�
					DisplayBoard(show, ROW, COL);
				}
			}

		}
		else
		{
			printf("��������Ƿ�\n");
		}
	}
	if (win == rows * cols - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
	
}
