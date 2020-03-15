#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>

int main0401()
{
	//字符数组
	char arr[5] = { 'h','e','l','l','o' };

	//字符串  字符串的结束标志为\0  数字0等同于\0 但不等同于'0'
	char *str = "hello";

	for (int i = 0; i < 5; i++)
	{
		printf("%c", arr[i]);
	}
	printf("%s", str);

	return 0;
}

int main0402()
{
	//字符串的输入
	char arr[10];

	scanf("%s", arr);  //这里不加& 是因为arr本身就为地址值 arr[0]就不是
	//输入时加空格自动截断后面不赋值
	//长度为10时只能输入9个 作为字符串最后一个必须为\0 或 0 否则报错
	printf("%s", arr); 

	return 0;
}


int main0403()
{
	//字符串的拼接
	char arr1[] = "hello";
	char arr2[] = "world";//此处数组有6个 最后一个为\0

	char arr3[20];

	int i = 0;
	int j = 0;
	while (arr1[i]!='\0')
	{
		arr3[i] = arr1[i];
		i++;
	}
	while (arr2[j] != '\0')
	{
		arr3[i+j] = arr2[j];
		j++;
	}

	//一定要有\0 字符串以\0结尾
	arr3[i + j] = '\0';

	printf("%s", arr3);

	return 0;
}