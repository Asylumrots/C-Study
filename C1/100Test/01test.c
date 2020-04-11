#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <string.h>

//求1+2+3+...+n的值，其中n由用户输入。
int main01()
{
	int value;
	int total = 0;
	scanf("%d", &value);
	for (int i = 1; i <= value; i++)
	{
		total += i;
	}
	printf("%d\n", total);
	return 0;
}

//计算 s=1-1/3 + 1/5- 1/7+…1/101 的值并输出
int main02()
{
	float total = 1;
	int flag = 0;
	for (int i = 3; i <=101; i+=2)
	{
		if (flag)
		{
			total += 1.0 / i;
			flag = 0;
		}
		else
		{
			total -= 1.0 / i;
			flag = 1;
		}
	}
	printf("%f", total);
	return 0;
}

//编写程序求出 555555的约数中最大的三位数是多少。 要求必须使用 do-while语句实现。
int main04()
{
	int num = 555555;
	int res = 0;
	int i = 100;
	do 
	{
		if (num%i==0)
		{
			res = i;
		}
		i++;
	} while (i / 1000 == 0);
	printf("%d\n", res);
	return 0;
}

//输入一个正整数， 要求以相反的顺序输出该数。 例如输入12345， 输出位54321
int main05()
{
	char num[1000];
	scanf("%s", num); 
	for (int i = strlen(num)-1; i >= 0; i--)
	{
		printf("%c", num[i]);
	}

	return 0;
}

//编写程序，求S=1/(1*2)+1/(2*3)+1/(3*4)+……前50项之和。要求必须使用for语句实现。
int main06()
{
	float total = 0;
	for (int i = 1; i <= 50 ; i++)
	{
		total += (float) 1 / (i*(i + 1));
	}
	printf("%f", total);
	return 0;
}

//编写程序，求S=1/(1+2)+1/(2+3)+1/(3+4)+……前50项之和。要求必须使用while 语句实现。 
int main07()
{
	float total = 0;
	int i = 1;
	while (i <= 50)
	{
		total += (float) 1 / (i + (i + 1));
		i++;
	}
	printf("%f", total);
	return 0;
}

//输入 10个整数，统计同时能被 3和 7 整除的个数，结果存放在变量 nCount中。将 nCoun 输出。要求必须使用 do-while 语句实现。
int main08()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int i = 0;
	int nCount = 0;
	do 
	{
		if (arr[i] % 3 == 0 && arr[i] % 7 == 0) 
		{
			nCount++;
		}
		i++;
	} while (i < 10);
	printf("%d", nCount);
	return 0;
}

int main11()
{
	int x, y;
	(y = 6, y + 1, x = y, x + 1);
	printf("%d", (y = 6, y + 1, x = y, x + 1));
	return 0;
}

int main12()
{
	/*int  a = 5, b = 0, c = 0;
	int *p=&a;
	if (*p)  printf("***\n  ");
	else   printf("$$$\n");*/
	int ;

	/*int i = 0;
	while (a = 1) {
		printf("%d", i);
		i++ ;
	}*/
	return 0;

}