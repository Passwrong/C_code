#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������ָ��
//int main()
//{
//	int weight = 0;
//	int height = 0;
//	float BMI = 0.0f;
//	scanf("%d %d", &weight, &height);
//	BMI = weight / (height/100.0 * height/100.0);
//	printf("%.2f", BMI);
//	return 0;
//}


//forѭ��
//int main()
//{
//	//for (���ʽ1�����ʽ2�����ʽ3)   ���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ�����������ʽ2Ϊ�����жϲ��֣������ж�ѭ����ֹ�����ʽ3Ϊ�������֣�����ѭ�������ĵ�����
//		//ѭ����䣻
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//��ֹѭ��
//			//continue; ����continue�������䣬ֱ�ӽ���i++�ĵ����׶�
//		printf("%d", i);
//	}
//
//	return 0;
//}



//int main()
//{
//	for (int i = 0;i < 3;i++)//����д����֧��c99�﷨����֧��c99�﷨�ı������޷�ʶ��
//	{
//		for (int j = 0;j < 3;j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)  //ʹ�ö����������ѭ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//do.... whileѭ��
//do
//ѭ����䣻
//while(���ʽ)��

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//�˳�ѭ��
//			//continue;��������ѭ��continue������
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}



//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}


//����1��+2��+3��...+10!
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret2 = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int ret1 = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret1 = ret1 * j;
//		}
//		ret2 = ret2 + ret1;
//	}
//	printf("%d", ret2);
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//�����������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}


//������ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	for (; left <= right;)
//	{
//		//int mid = (left + right) / 2;//���ܳ������洢��Χ
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
//#include <windows.h>
//int main()
//{
//	char arr1[] = "Welcome to bit !!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2; //ע���ַ���������־\0Ҳ��һ��Ԫ�أ�//int right = strlen(arr1)-1; strlen����\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//�����Ļ
//		system("cls"); //system��һ���⺯������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	return 0;
//}



//��д����ʵ��ģ���û���¼�龰������ֻ�ܵ�¼3�Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ������ξ��������˳�����
//�Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp���������ֵ��0����ʾ�����ַ������
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//�����������ַ�����abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룻>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("������������˳�����");
//	return 0;
//}


////������
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("****** �� �� �� �� ս ******\n");
//	printf("****************************\n");
//	printf("********** 1.play **********\n");
//	printf("********** 0.exit **********\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	//���������
//	int ret = rand()%100+1;//����0--100�������
//	//printf("%d\n", ret);
//	//������
//	
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//	if (guess > ret)
//		printf("�´���\n");
//	else if (guess < ret)
//		printf("��С��\n");
//	else
//		{
//			printf("��ϲ�㣬�¶���������\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//����ʱ������������
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//goto ���(��ת),�����ڶ��ѭ��Ƕ��ʱ�������ѭ��
//int main()
//{
//	again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//}


//�ػ�����
//#include <windows.h>
//int main()
//{
//	char ch [20] = {0};
//	system("shutdown -s -t 1000");
//	again:
//	printf("��ע�⣬���ĵ��Խ���60���ػ������룺��������ȡ���ػ�\n");
//	scanf("%s", ch);
//	if (strcmp(ch, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("�����������������");
//		goto again;
//	}
//	return 0;
//}


//����
