#include <stdio.h>

void copystring(char arr1[], char arr2[])
{
	int i;
	for (i = 0; arr1[i] != '\0'; i++)
	{
		arr2[i] = arr1[i];
	}
	arr2[i] = 0;
	return;
}

void copystring2(char* arr1, char* arr2)
{
	while (*arr1)  //数组最后一个为0 即为false
	{
		*arr2 = *arr1;
		arr1++; //指针每加1 即指向数组的下一个元素  
		arr2++;
	}
	*arr2 = 0;
	return;
}

int main08()
{
	//字符串的拷贝操作
	char arr1[] = "helloworld";
	char arr2[100];

	copystring(arr1, arr2);

	printf("%s\n", arr2);

	return 0;
}

int main0802()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int *p = arr;
	p = &arr[3]; // 4
	p--;//指针的加减运算和指针类型有关  p--即指向数组的上一个元素（指针和数组类型相同时）
	printf("%d\n", *p);// 3

	int s = p - arr; //内存地址偏移4位（即一个int） 3 地址偏移4个 到 2

	printf("%d\n", s); //2

	printf("%d\n", p[-2]); // 此处指针数组下标允许为负数 p[-2]等同于 *(p-2) 

	//int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	//char *p2 = arr2;
	//p2 = &arr2[3]; // 4
	//p2--;//指针的加减运算和指针类型有关  p--即指向数组的下一个元素（指针和数组类型相同时）
	//printf("%d\n", *p2);

	return 0;
}

int main0803()
{
	//指针的运算 -- ++ > < = && ||

	return 0;
}