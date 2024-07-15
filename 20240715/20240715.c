#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//转换ASCII码
//int main()
//{
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr) - 计算数组的总大小，单位是字节；sizeof(arr[0]) - 计算数组元素的大小，单位是字节；
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}




//出生日期的输入输出
//int main()
//{
//	//输入
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	//输出
//	printf("year=%d\nmonth=%02d\nday=%02d", year, month, day);//%02d表示打印两位，左边没有数字用零填充，%2d表示打印两位，左边没有数字用空格填充；
//	return 0;
//}


//成绩输入输出
//int main()
//{
//	int num = 0;
//	float cl = 0.0f;
//	float en = 0.0f;
//	float ma = 0.0f;
//	scanf("%d, %f, %f, %f", &num, &cl, &en, &ma);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, cl, en, ma);//%.2f表示打印两位小数。
//
//	return 0;
//}


//最大数
int main()
{
	int arr[4] = { 0 };
	int i = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	int max = arr[0];
	i = 1;
	while (i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		i++;
	}
	printf(" % d", max);
	return 0;
}