#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数递归  程序调用自身的编程技巧

//接收一个整型值（无符号），按照顺序打印其每一位
//如 输入：1234  输出：1 2 3 4
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);  //%d打印有符号的整数（正负号）；%u打印无符号的整数
//	while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}
// 
// 
//递归形式
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
//	scanf("%u", &num);  //%d打印有符号的整数（正负号）；%u打印无符号的整数
//	print(num);
//	return 0;
//}
//递归的两个必要条件
//1.存在限制条件，当满足这个条件时，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件



//编写函数不允许创建临时变量，求字符串的长度
//求字符串的长度，模拟实现strlen函数

//int my_strlen(char str[])  参数部分写成数组的形式
//int my_strlen(char* str)   //参数部分写成指针的形式
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}
// 
//递归形式
//int my_strlen(char* str)   //参数部分写成指针的形式
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


//阶乘的函数递归实现
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


//求第n个斐波那契数
//斐波那契数列 Fib（n）=1（n<=2）,Fib(n)=Fib(n-1)+Fib(n-2)
//递归实现
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n-1) + Fib(n - 2);
//}

//迭代实现
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



//计算1/1-1/2+1/3-1/4....+1/99-1/100的值，打印出结果
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


//打印9*9乘法表
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", j, i, i*j);//%2d打印两位右对齐，%-2d打印两位左对齐
		}
		printf("\n");
	}
	return 0;
}


