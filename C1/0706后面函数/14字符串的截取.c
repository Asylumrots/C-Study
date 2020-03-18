#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <string.h>

int main14()
{
	char arr[] = "www.zhang.com";
	char c[] = ".";//此参数必须为字符串
	//
	//分割以加\0破坏字符串的  即 此处 arr为 www\0zhang.com
	char *p = strtok(arr, c);
	printf("%s\n", p);//输出www


	//分割以加\0破坏字符串的  即 此处 arr为 www\0zhang\0com
	p = strtok(NULL, c);
	printf("%s\n", p);//输出zhang

	p = strtok(NULL, c);
	printf("%s\n", p);//输出com

	return 0;
}

int main1402()
{
	char arr[] = "我看\n不见你的\n可以的对赌地\n撒士大夫士大夫";
	char str[100] = { 0 };

	//字符串的拷贝 此处做法是由于分割会破坏原本字符串 拷贝一份分割备份的不破坏原本的
	strcpy(str, arr);

	char c[] = "\n";
	char *p;
	//截取第一个字符串
	p = strtok(str, c);

	while (*p!=NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, c);
	}

	return 0;
}