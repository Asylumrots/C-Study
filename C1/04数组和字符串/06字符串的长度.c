#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <string.h>

int main06()
{
	char arr[] = "hello world";
	printf("字符数组的大小%d\n", sizeof(arr));
	//需要导入 #include <string.h>
	printf("字符数组的长度%d\n", strlen(arr));

	return 0;
}