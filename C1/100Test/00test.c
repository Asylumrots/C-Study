#define _CRT_SECURE_NO_WARNINGS  //ºöÂÔÊäÈë´íÎó¾¯¸æ
#include<stdio.h>

int main1111()
{
	int x, y;
	x = 3;
	do
	{
		y = x--;
		if (!y) { printf("x"); continue; }
		printf("#");
	} 
	//while (1 <= x  && x <= 2);
	while (1 <= x  <= 2);
	return 0;
}

int main11111()
{
	int i, j, a = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (j % 2)  break;
			a++;
		}
		a++;
	}
	printf("%d\n", a);
	return 0;
}

int main()
{
	int  a = 5, b = 0, c = -1;
	//printf("%d", a = b + c);
	int arr[] = { 1,2,4,5,6 };
	if (arr)  printf("***\n  ");
	else   printf("$$$\n");
	return 0;
}