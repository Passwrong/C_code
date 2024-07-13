#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
	////输入
	//int x = 0;
	//int y = 0;
	//scanf("%d", &x);
	////输出
	//if (x > 0)
	//	y = -1;
	//else if (x == 0)
	//	y = 0;
	//else
	//	y = 1;
	//printf("%d\n", y);


	//int a = 10;
	//int b = a--;
	////int b = a++;
	//////先使用，再加减1  b=a;a=a+/-1;
	////int b = --a;
	////int b = ++a;
	////先加减1，再使用  a=a+/-1;b=a;
	//printf("%d\n", b);
	//printf("%d\n", a);


	/*int a = (int)3.14;*/
	//3.14字面浮点数，编译器默认理解为double类型

	//int a = 10;
	//if (a == 3)//=赋值，==判断相等，!=判断不相等
	//{
	//	printf("hehe\n");
	//}


	//&&逻辑与 - 并且
	//||逻辑或 - 或者
	//当a=0时，默认为假，a!=0时，为真
	//int a = 10;
	//int b = 20;
	//if (a && b)
	////if (a || b)

	//		printf("hehe\n");


	//int a = 10;
	//int b = 20;
	//int r = a < b ? a : b;//三目操作符， exp1？exp2：exp3; exp1为真，取exp2;exp1为假，取exp3；
	//printf("%d\n", r);

	//逗号表达式用逗号隔开的一串表达式
	//逗号表达式的特点是：从左向右依次计算，输出的结果为最后一个表达式的结果
	/*int a = 10;
	int b = 20;
	int c = 0;

	int d = (c = a - 2, a = b + c, c - 3);
	printf("%d\n", d);*/


	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//arr[3] = 20;//[]为下标操作符  arr和3是[]的操作数

	/*return 0;

}*/


//函数调用操作符 ()
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = Add(2, 3);//()是函数调用操作符，Add，2，3都是（）的操作数
//	printf("%d\n", sum);
//	return 0;
//}


//关键字
//auto break case char const continue default do double else enum extern float for goto if int long register return short signed sizeof static struct switch typedef union unsigned void volatile while


//void test()
//{
//	//int a = 1;
//	static int a = 1;//static 修饰局部变量时，改变了变量的存储位置，局部变量作为静态储存，出了作用域不销毁
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//
//	}
//	return 0;
//}


//#define 定义宏
//#define ADD(x,y) (x+y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//
//}


