#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//指针
//int main()
//{
//	int a = 10;//向内存申请4个字节
//	&a;//取a的地址
//	printf("%p\n", &a);//16进制数值
//	int* p = &a;//p为指针（地址）变量，int表示p指向的对象是int类型，*表示p是指针变量
//	*p = 20;//*加指针变量时表示解引操作符，通过指针变量p中的存放的地址，找到p所指向的对象，*p可理解为指针变量p所指向的对象
//	char ch = "cw";
//	char* pc = &ch;
//
//	//不管什么类型的指针，都是在创建指针变量
//	//指针变量用来存放地址，指针变量的大小取决于一个地址存放的时候需要的空间大小
//	//32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
//	//64位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节
//
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	printf("%zu\n", sizeof(int*));
//	return 0;
//}

////结构体
//struct Stu
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20, "男",  "10086" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//结构体.成员名
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//}

//语句
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
//	//	printf("未成年\n");
//	//	printf("不能饮酒\n");
//	//}
//	//else
//	//	printf("成年\n");
//
//	//多分支
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <=100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
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

//判断奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//		//判断
//	if (num % 2 == 1)
//		printf("是奇数\n");
//	else
//		printf("不是奇数\n");
//	return 0;
//}


//输出1-100之间的奇数
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


//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day必须是整型（字符）
//	{
//	case 1://case后面只能是整型表达式（字符）
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day必须是整型（字符）
//	{
//	case 1://case后面只能是整型表达式（字符）
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
//	default://default子句，case不包含的情况
//		printf("请输入1-7");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//n必须是整型（字符）
//	{
//	case 1:
//		m++;//case后面只能是整型表达式（字符）
//	case 2:
//		n++;
//	case 3:
//		switch (n) //switch 可以嵌套使用
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
//	default://default子句，case不包含的情况
//		break;
//	}
//	printf("m=%d, n=%d", m, n);
//	return 0;
//}


//循环语句
// while循环中，break用于终止循环，continue用于跳过本次循环后面的代码，直接去判断while的条件，终止或进行下一次循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//满足break条件时跳出循环
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
//			continue;//满足continue条件时直接跳过continue后面的内容进入下一次循环
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}


int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	//getchar();会读取\n
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认密码（Y/N）:>");
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