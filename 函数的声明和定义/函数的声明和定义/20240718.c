#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数
//void Swap(int x, int y) //x y 为形式参数
//{
//	int z = x;//z=a
//	x = y;//a=b
//	y = z;//b=a
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//a b为实际参数
//	Swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//当实际参数传递给形式参数时，形参是实参的一份拷贝，对形参的修改不会影响实参
//若要使得形参与实参相关联，则可使用指针建立关联，如下所示


//void Swap(int* px, int* py)
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=a
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//a b为实参
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//写一个函数判断一个数是否为素数
//打印100--200之间的素数
//素数只能被1和其本身整除
//
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++) //偶数不用考虑
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;//flag为1表示是素数；
//		
//		//for (j = 2; j <= i - 1; j++)//
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d \n", count);
//	return 0;
//}

//#include <math.h>
//int is_prime(int n)//判断为素数的函数
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++) //偶数不用考虑
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))//判断是否为素数
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d \n", count);
//	return 0;
//}


//写一个函数判断是不是闰年
//1.能被4整除但不能被100整除
//2.能被400整除
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断闰年
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//逻辑关系简化如下

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}



//写一个函数，实现一个整形有序数组的二分查找

int binary_search(int arr[], int k, int sz)//数组传参从实际参数传到形式参数时传递的是首元素的地址而非整个数组
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//找到了，返回下标
		}
	}
	return -1;//找不到
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标为：%d\n", ret);
	}
	return 0;
}



