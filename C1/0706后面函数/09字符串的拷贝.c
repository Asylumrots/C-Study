#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <string.h>

int main09()
{
	char arr1[] = "hello world";
	char arr2[100];//需要保证此处有足够的大小来存储复制过来的字符串 溢出将报错
	//参数1 为拷贝字符串 2 被拷贝字符串
	strcpy(arr2, arr1);//复制字符串 替换原有的所有 并且不会拷贝\0
	printf("%s\n", arr2);


	char arr3[100] = {0};//初始化
	strncpy(arr3, arr1, 4);//参数1 为拷贝字符串 2 被拷贝字符串 3 拷贝个数(必须大于等于0) 
	//特别注意此处 拷贝是否结束看指定长度是否包含\0	
	printf("%s\n", arr3);

	return 0;
}