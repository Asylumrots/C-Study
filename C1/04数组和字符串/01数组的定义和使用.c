#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>

int main01()
{
	//定义一个数组
	int arr1[5] = { 0,1,2,3,4 };
	int arr2[] = { 0,1,2,3,4,5,6,7,8,9 };//根据数组内容来决定数组下标大小
	int arr3[10] = { 0,1,2 };//未赋值的默认值为0

	//循环打印数组的数 sizeof(arr1)/sizeof(arr1[0])表示数组的数据个数
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
	//数组元素必须为常量 常量表达式 
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