#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******** 扫    雷 ********\n");
	printf("**************************\n");
	printf("********* 1.Play *********\n");
	printf("********* 0.Exit *********\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置的雷
	char show[ROWS][COLS] = { 0 };//存放排查的雷
	//初始化数组的内容为指定内容
	//mine 数组在没有布置雷的时候，都是‘0’；
	InitBoard(mine, ROWS, COLS, '0');
	//show数组在没有查雷的时候都是‘*’
	InitBoard(show, ROWS, COLS, '*');

	//设置雷信息
	setmine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//排查雷
	findmine(mine, show, ROW, COL);

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