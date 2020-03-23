#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>

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