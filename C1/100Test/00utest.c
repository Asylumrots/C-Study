#define _CRT_SECURE_NO_WARNINGS  //ºöÂÔÊäÈë´íÎó¾¯¸æ
#include<stdio.h>
int main00()
{
	int a = 0, b = 1, c = 0, d = 20;
	if (a) d = d - 10;
	else if (!b)
		if (!c) d = 15;
		else d = 25;
	printf("d=%d\n", d);
	return 0;
}