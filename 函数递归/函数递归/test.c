#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�����ݹ�  �����������ı�̼���

//����һ������ֵ���޷��ţ�������˳���ӡ��ÿһλ
//�� ���룺1234  �����1 2 3 4
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);  //%d��ӡ�з��ŵ������������ţ���%u��ӡ�޷��ŵ�����
//	while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}
// 
// 
//�ݹ���ʽ
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);  //%d��ӡ�з��ŵ������������ţ���%u��ӡ�޷��ŵ�����
//	print(num);
//	return 0;
//}
//�ݹ��������Ҫ����
//1.���������������������������ʱ���ݹ�㲻�ټ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������



//��д��������������ʱ���������ַ����ĳ���
//���ַ����ĳ��ȣ�ģ��ʵ��strlen����

//int my_strlen(char str[])  ��������д���������ʽ
//int my_strlen(char* str)   //��������д��ָ�����ʽ
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
//	}
//	return count;
//}
// 
//�ݹ���ʽ
//int my_strlen(char* str)   //��������д��ָ�����ʽ
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//�׳˵ĺ����ݹ�ʵ��
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//}


//���n��쳲�������
//쳲��������� Fib��n��=1��n<=2��,Fib(n)=Fib(n-1)+Fib(n-2)
//�ݹ�ʵ��
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n-1) + Fib(n - 2);
//}

//����ʵ��
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}



//����1/1-1/2+1/3-1/4....+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��ӡ9*9�˷���
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", j, i, i*j);//%2d��ӡ��λ�Ҷ��룬%-2d��ӡ��λ�����
		}
		printf("\n");
	}
	return 0;
}


