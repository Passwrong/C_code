#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���� :һ����ͬ����Ԫ�صļ���
//int main()
//{
//	int arr[10];
//	char ch[5];
//	double data1[20];
//	double data2[20];
//
//	int n = 0;
//	int arr2[n];//�䳤���飬֧��c99�ı��������ܱ���
//	return 0;
//}



//int main()
//{
//	//����ȫ��ʼ��
//	int arr[10] = { 1,2,3,4 };
//	int arr[10] = { 'a', 'b', 'c' };
//	//a b c 0 0 0 0 0 0 0 0
//	char ch[10] = { "abc" };
//	//a b c \0 0 0 0 0 0 0 0
//	
//	int arr1[] = { 1,2,3,4 };//���������Ԫ�ظ���ȷ�������С
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




//��ά����
//int arr[][];
//��ά����洢��ʽΪ�����������
//��������ʡ�ԣ�����������ʡ��  int arr[][3]
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//%pΪ��ӡ��ַ
//
//		}
//	}
//
//	return 0;
//}


//����Խ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	//0~9
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//Խ����ӡ���������
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
//			printf("%d ",arr[i][j]);//%pΪ��ӡ��ַ
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//ð������
//void buble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);arrͨ������������ǵ�һ��Ԫ�صĵ�ַ�������������飬���ڲ��޷��������Ԫ�ظ���
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


//������
//�������ܱ�ʾ��Ԫ�ص�ַ
//1.sizeof�����������е���������ʾ�������飬���������������Ĵ�С��
//2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ
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

//��ά�����������Ҳ��ʾ������Ԫ�صĵ�ַ
//int main()
//{
//	int arr[3][4];
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//��ά���������
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//��ά���������
//
//	return 0;
//}


//������
//ɨ��