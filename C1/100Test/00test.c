#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
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

int main2()
{
	int  a = 5, b = 0, c = -1;
	//printf("%d", a = b + c);
	int arr[] = { 1,2,4,5,6 };
	if (arr)  printf("***\n  ");
	else   printf("$$$\n");
	return 0;
}

int main3()
{
	int c;
	while ((c = getchar()) != '\n')
		if (c - '6')putchar(c + 10);
		else putchar(c);

	return 0;
}

int main4()
{
	int a = 4;
	printf("%d%d%d", a++, a++, ++a);
	return 0;
}

int main5()
{
	char str[] = "SSSWLIA", c;
	int k;
	for (k = 2;  (c=str[k])!='\0'; k++)
	{
		switch (c)
		{
		case 'I':++k; break;
		case 'L':continue;
		default:putchar(c);continue;
		}
		putchar('*');
	}
	return 0;
}

int main6()
{
	int max1=0, max2=0;
	int arr[2][3] = { {10,2,3},{11,7,9} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (arr[max1][max2]<arr[i][j])
			{
				max1 = i;
				max2 = j;
			}
		}
	}
	printf("%d---%d", max1, max2);
	return 0;
}

int method1(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main7()
{
	int total = 0;
	for (int i = 2; i <= 500; i++)
	{
		if (method(i))
		{
			printf("%d\n", i);
			total += i;
		}
	}
	printf("总和:%d\n", total);
	//printf("%d", method(11));
	return 0;
}


int main8()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9-i; j++)
		{
			if (a[j] < a[j+1])
			{
				int n = a[j+1];
				a[j+1] = a[j];
				a[j] = n;
			}
		}
	}
	printf("-----------\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}

//int isLower(char ch)
//{
//	printf("%c\n", ch[2]);
//	return 0;
//}

int main9()
{
	int num1=0,num2=0, x=0, y=0,total=0;
	scanf("%d,%d,%d,%d",&num1,&num2, &x, &y);
	for (int i = num1; i <= num2; i++)
	{
		if (i%x==0 && i%y==0)
		{
			total += i;
		}
	}
	printf("%d", total);
	return 0;
}
