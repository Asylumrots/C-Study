#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <string.h>

int main13()
{
	char arr1[] = "helloworld";
	char arr2 = 'l';
	// 在参数 str 所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置。未找到返回NULL
	//查找字符第一次出现的位置 返回后面的值包括查找的第一个词 
	char *arr3 = strchr(arr1, arr2);
	//此处输出loworld
	printf("%s\n", arr3);


	char arr4 = 'l';
	//在参数 str 所指向的字符串中搜索最后一次出现字符 c（一个无符号字符）的位置  未找到返回NULL
	char *arr5 = strrchr(arr1, arr4);
	//输出ld
	printf("%s\n", arr5);


	//C 库函数 char *strstr(const char *haystack, const char *needle) 
	//在字符串 haystack 中查找第一次出现字符串 needle 的位置，不包含终止符 '\0'。
	char arr6[] = "hello world";
	char arr7[] = "wor";
	char *arr8 = strstr(arr6,arr7);
	//输出world
	printf("%s\n", arr8);

	return 0;
}