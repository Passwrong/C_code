#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ָ��
//int main()
//{
//	int a = 10;//���ڴ�����4���ֽ�
//	&a;//ȡa�ĵ�ַ
//	printf("%p\n", &a);//16������ֵ
//	int* p = &a;//pΪָ�루��ַ��������int��ʾpָ��Ķ�����int���ͣ�*��ʾp��ָ�����
//	*p = 20;//*��ָ�����ʱ��ʾ������������ͨ��ָ�����p�еĴ�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p�����Ϊָ�����p��ָ��Ķ���
//	char ch = "cw";
//	char* pc = &ch;
//
//	//����ʲô���͵�ָ�룬�����ڴ���ָ�����
//	//ָ�����������ŵ�ַ��ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ�Ŀռ��С
//	//32λ�����ϵĵ�ַ��32bitλ - 4byte������ָ������Ĵ�С��4���ֽ�
//	//64λ�����ϵĵ�ַ��64bitλ - 8byte������ָ������Ĵ�С��8���ֽ�
//
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	printf("%zu\n", sizeof(int*));
//	return 0;
//}

////�ṹ��
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20, "��",  "10086" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//�ṹ��.��Ա��
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//}

//���
//if
//int main()
//{
//	//int a = 10;
//	//if (3 == 5)
//	//	printf("hehe\n");
//
//	//int age = 20;
//	//if (age < 18)
//	//{
//	//	printf("δ����\n");
//	//	printf("��������\n");
//	//}
//	//else
//	//	printf("����\n");
//
//	//���֧
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age <=100)
//		printf("����\n");
//	else
//		printf("������\n");
//
//
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)  //if (num == 5)
//		printf("hehe\n");
//	return 0;
//}

//�ж�����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//		//�ж�
//	if (num % 2 == 1)
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}


//���1-100֮�������
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//			{
//				printf("%d ", num);
//			}
//		num++;
//	}
//	return 0;
//}


//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day���������ͣ��ַ���
//	{
//	case 1://case����ֻ�������ͱ��ʽ���ַ���
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day���������ͣ��ַ���
//	{
//	case 1://case����ֻ�������ͱ��ʽ���ַ���
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("Weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("Weekend\n");
//		break;
//	default://default�Ӿ䣬case�����������
//		printf("������1-7");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//n���������ͣ��ַ���
//	{
//	case 1:
//		m++;//case����ֻ�������ͱ��ʽ���ַ���
//	case 2:
//		n++;
//	case 3:
//		switch (n) //switch ����Ƕ��ʹ��
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default://default�Ӿ䣬case�����������
//		break;
//	}
//	printf("m=%d, n=%d", m, n);
//	return 0;
//}


//ѭ�����
// whileѭ���У�break������ֹѭ����continue������������ѭ������Ĵ��룬ֱ��ȥ�ж�while����������ֹ�������һ��ѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//����break����ʱ����ѭ��
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;//����continue����ʱֱ������continue��������ݽ�����һ��ѭ��
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}


int main()
{
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	//getchar();���ȡ\n
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�����루Y/N��:>");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}