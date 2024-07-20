#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组 :一组相同类型元素的集合
//int main()
//{
//	int arr[10];
//	char ch[5];
//	double data1[20];
//	double data2[20];
//
//	int n = 0;
//	int arr2[n];//变长数组，支持c99的编译器才能编译
//	return 0;
//}



//int main()
//{
//	//不完全初始化
//	int arr[10] = { 1,2,3,4 };
//	int arr[10] = { 'a', 'b', 'c' };
//	//a b c 0 0 0 0 0 0 0 0
//	char ch[10] = { "abc" };
//	//a b c \0 0 0 0 0 0 0 0
//	
//	int arr1[] = { 1,2,3,4 };//根据数组的元素个数确定数组大小
//	
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}




//二维数组
//int arr[][];
//二维数组存储方式为依次连续存放
//行数可以省略，但列数不能省略  int arr[][3]
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//%p为打印地址
//
//		}
//	}
//
//	return 0;
//}


//数组越界
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	//0~9
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//越界后打印的是随机数
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 4; j++)
//		{
//			printf("%d ",arr[i][j]);//%p为打印地址
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//冒泡排序
//void buble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);arr通过函数传入的是第一个元素的地址，而非整个数组，故内部无法求数组的元素个数
//	for (i = 0; i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz -1- i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	buble_sort(arr,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//数组名
//数组名能表示首元素地址
//1.sizeof（数组名）中的数组名表示整个数组，计算的是整个数组的大小；
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("------------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("------------------\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//}

//二维数组的数组名也表示数组首元素的地址
//int main()
//{
//	int arr[3][4];
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//二维数组的行数
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//二维数组的列数
//
//	return 0;
//}


//三子棋
//扫雷