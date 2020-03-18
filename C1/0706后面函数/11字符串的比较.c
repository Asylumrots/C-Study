#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <string.h>

int main11()
{
	char arr1[] = "helloworld";
	char arr2[] = "hellowworld";

	//两个字符串自左向右逐个字符相比（按 ASCII 值大小相比较），直到出现不同的字符或遇 \0 为止
	/*如果返回值小于 0，则表示 str1 小于 str2。
	如果返回值大于 0，则表示 str1 大于 str2。
	如果返回值等于 0，则表示 str1 等于 str2。*/
	//a 97 A 65 0 48
	int value = strcmp(arr1, arr2);


	int value2 = strncmp(arr1, arr2, 2);


	printf("%d\n", value);
	printf("%d\n", value2);

	return 0;
}