#include <stdio.h>

void main0201()
{
	int a[4][4] = { {10,11,12,13},{14,15,16,17},{18,19,20,21},{22,23,24,25} };
	int i, j;
	//转换之前输出
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf(" %d", a[i][j]);

		}
		printf("\n");
	}
	printf("xxxxxxxxxxxx\n");
	//进行行列转换
	int temp;
	int n = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = i; j < 4; j++)
		{
			temp = a[j][n];
			a[j][n] = a[n][j];
			a[n][j] = temp;
		}
		n++;

	}
	//转换之后输出
	//转换之前输出
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf(" %d", a[i][j]);

		}
		printf("\n");
	}
}

void main0202()
{
	int a;
	for (int i = 100; i <= 200; i++)
	{
		a = 0;
		for (int j = 2; j < i; j++)
		{
			if (i%j==0)
			{
				a++;
			}
		}
		if (a==0)
		{
			printf("%d\n", i);
		}
	}
}
