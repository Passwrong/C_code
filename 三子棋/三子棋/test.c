#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******** 三 子 棋 ********\n");
	printf("**************************\n");
	printf("********* 1.Play *********\n");
	printf("********* 0.Exit *********\n");
	printf("**************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你赢了\n");
	}
	else if (ret == '#')
	{
		printf("你输了\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));//设置随机数的起点
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}