#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******** ɨ    �� ********\n");
	printf("**************************\n");
	printf("********* 1.Play *********\n");
	printf("********* 0.Exit *********\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��õ���
	char show[ROWS][COLS] = { 0 };//����Ų����
	//��ʼ�����������Ϊָ������
	//mine ������û�в����׵�ʱ�򣬶��ǡ�0����
	InitBoard(mine, ROWS, COLS, '0');
	//show������û�в��׵�ʱ���ǡ�*��
	InitBoard(show, ROWS, COLS, '*');

	//��������Ϣ
	setmine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//�Ų���
	findmine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));//��������������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}