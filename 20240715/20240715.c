#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ת��ASCII��
//int main()
//{
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr) - ����������ܴ�С����λ���ֽڣ�sizeof(arr[0]) - ��������Ԫ�صĴ�С����λ���ֽڣ�
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}




//�������ڵ��������
//int main()
//{
//	//����
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	//���
//	printf("year=%d\nmonth=%02d\nday=%02d", year, month, day);//%02d��ʾ��ӡ��λ�����û������������䣬%2d��ʾ��ӡ��λ�����û�������ÿո���䣻
//	return 0;
//}


//�ɼ��������
//int main()
//{
//	int num = 0;
//	float cl = 0.0f;
//	float en = 0.0f;
//	float ma = 0.0f;
//	scanf("%d, %f, %f, %f", &num, &cl, &en, &ma);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, cl, en, ma);//%.2f��ʾ��ӡ��λС����
//
//	return 0;
//}


//�����
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