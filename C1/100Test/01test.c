#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>

//��1+2+3+...+n��ֵ������n���û����롣
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

//���� s=1-1/3 + 1/5- 1/7+��1/101 ��ֵ�����
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