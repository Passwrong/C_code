#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����
//void Swap(int x, int y) //x y Ϊ��ʽ����
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
//	//����
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//a bΪʵ�ʲ���
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}
//��ʵ�ʲ������ݸ���ʽ����ʱ���β���ʵ�ε�һ�ݿ��������βε��޸Ĳ���Ӱ��ʵ��
//��Ҫʹ���β���ʵ������������ʹ��ָ�뽨��������������ʾ


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
//	//����
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//a bΪʵ��
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}


//дһ�������ж�һ�����Ƿ�Ϊ����
//��ӡ100--200֮�������
//����ֻ�ܱ�1���䱾������
//
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++) //ż�����ÿ���
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;//flagΪ1��ʾ��������
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
//int is_prime(int n)//�ж�Ϊ�����ĺ���
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
//	//for (i = 100; i <= 200; i++) //ż�����ÿ���
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))//�ж��Ƿ�Ϊ����
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d \n", count);
//	return 0;
//}


//дһ�������ж��ǲ�������
//1.�ܱ�4���������ܱ�100����
//2.�ܱ�400����
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�����
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
//�߼���ϵ������

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



//дһ��������ʵ��һ��������������Ķ��ֲ���

int binary_search(int arr[], int k, int sz)//���鴫�δ�ʵ�ʲ���������ʽ����ʱ���ݵ�����Ԫ�صĵ�ַ������������
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
			return mid;//�ҵ��ˣ������±�
		}
	}
	return -1;//�Ҳ���
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
	}
	return 0;
}



