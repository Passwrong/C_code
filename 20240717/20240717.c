#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//计算体重指数
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


//for循环
//int main()
//{
//	//for (表达式1，表达式2，表达式3)   表达式1为初始化部分，用于初始化循环变量；表达式2为条件判断部分，用于判断循环终止；表达式3为调整部分，用于循环条件的调整；
//		//循环语句；
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//终止循环
//			//continue; 跳过continue后面的语句，直接进入i++的调整阶段
//		printf("%d", i);
//	}
//
//	return 0;
//}



//int main()
//{
//	for (int i = 0;i < 3;i++)//这种写法仅支持c99语法，不支持c99语法的编译器无法识别；
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
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)  //使用多个变量控制循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//do.... while循环
//do
//循环语句；
//while(表达式)；

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//退出循环
//			//continue;跳过本次循环continue后的语句
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}



//计算n的阶乘
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


//计算1！+2！+3！...+10!
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


//有序数组查找
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
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}


//有序二分查找
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
//		//int mid = (left + right) / 2;//可能超出最大存储范围
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//#include <windows.h>
//int main()
//{
//	char arr1[] = "Welcome to bit !!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2; //注意字符串结束标志\0也算一个元素；//int right = strlen(arr1)-1; strlen不算\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//清空屏幕
//		system("cls"); //system是一个库函数，可执行系统命令
//		left++;
//		right--;
//	}
//	return 0;
//}



//编写代码实现模拟用户登录情景，并且只能登录3次。（只允许输入三次密码，如果密码正确则提示登录成功，三次均错误则退出程序）
//比较两个字符串是否相等，不能使用==，而应该使用一个库函数；strcmp，如果返回值是0，表示两个字符串相等
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是字符串；abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码；>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登录成功!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//	}
//	if (i == 3)
//		printf("三次输入错误，退出程序");
//	return 0;
//}


////猜数字
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("****** 猜 数 字 挑 战 ******\n");
//	printf("****************************\n");
//	printf("********** 1.play **********\n");
//	printf("********** 0.exit **********\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	//生成随机数
//	int ret = rand()%100+1;//生成0--100的随机数
//	//printf("%d\n", ret);
//	//猜数字
//	
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//	if (guess > ret)
//		printf("猜大了\n");
//	else if (guess < ret)
//		printf("猜小了\n");
//	else
//		{
//			printf("恭喜你，猜对啦！！！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//利用时间戳生成随机数
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//goto 语句(跳转),常用于多层循环嵌套时跳出多层循环
//int main()
//{
//	again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//}


//关机程序
//#include <windows.h>
//int main()
//{
//	char ch [20] = {0};
//	system("shutdown -s -t 1000");
//	again:
//	printf("请注意，您的电脑将在60秒后关机，输入：“我是猪”取消关机\n");
//	scanf("%s", ch);
//	if (strcmp(ch, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("输入错误，请重新输入");
//		goto again;
//	}
//	return 0;
//}


//函数
