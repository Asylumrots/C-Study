#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <string.h>

int main10()
{
	char arr1[100] = "hello"; //拼接的需要空间足够否则溢出报错
	char arr2[] = "world";
	//参数1 拼接的字符串 2 被拼接的字符串 
	//\0也会被拼接过去
	strcat(arr1, arr2);
	printf("%s\n", arr1);


	char arr3[100] = "hello"; //拼接的需要空间足够否则溢出报错
	char arr4[] = "world";
	//参数1 拼接的字符串 2 被拼接的字符串 
	//\0也会被拼接过去
	strncat(arr3, arr4, 4);
	printf("%s\n", arr3);


	return 0;
}