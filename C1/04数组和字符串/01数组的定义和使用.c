#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>

int main01()
{
	//����һ������
	int arr1[5] = { 0,1,2,3,4 };
	int arr2[] = { 0,1,2,3,4,5,6,7,8,9 };//�����������������������±��С
	int arr3[10] = { 0,1,2 };//δ��ֵ��Ĭ��ֵΪ0

	//ѭ����ӡ������� sizeof(arr1)/sizeof(arr1[0])��ʾ��������ݸ���
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr1[0]));
	for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
	{
		printf("%d\n", arr1[i]);
	}

	return 0;
}

int main0101()
{
	int size = 5;
	//����Ԫ�ر���Ϊ���� �������ʽ 
	int arr[5];
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}