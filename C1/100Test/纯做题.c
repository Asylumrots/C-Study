#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <math.h>

void main1()
{
	int x1 = 2, x2 = 3, x3 = 4, *p = &x1;
	printf("%d%d%d", *p, x2, x3);
}

void main002()
{
	int a[8] = { 1,2,3,4,5,6,7,8 }, i = 0, s = 0;
	while (i++ < 7) {
		printf("%d---%d", s, a[i]);
		if (a[i] % 2) {
			printf("%d---%d", s, a[i]);
			s += a[i];
			printf("%d---%d", s, a[i]);
		}
		printf("%d---%d", s, a[i]);
		printf("----------");
	}
	printf("%d\n", s);
}

void main003()
{
int aa[4][4] = {{1,2,3,4},{5,6,7,8},{3,9,10,2},{4,2,9,6}};
int i ,s = 0;
for (i = 0; i < 4; i++) s += aa[i][i];
printf("%d\n",s);
}

void main004()
{
	char str[][10] = { "China","Beijing" }, *p = str[0];
	printf("%s\n", p + 10);
}

int f(int  x)
{
	static y = 1;
	y++;
	x += y;
	return x;
}
void main005()
{
	int k;
	k = f(3);

	printf("%d   %d\n", k, f(k));
}

void main006()
{
	char s[] =  "aeiou" ,*ps;
	ps = s; printf("%c\n", *ps + 4);

}

int method(int num)
{
	int i;
	for (i = 2; i < num; i++)
		if (num%i == 0) return 0;
	printf("%d ", i);
	return 1;
}

void main009()
{
	int total=0;
	for (int i = 2; i <= 500; i++)
		if (method(i))
			total += i;
	printf("总和=%d", total);
}

void main007()
{
	int m,n,k,total = 0;
	for (m = 2; m <= 500 ; m++)
	{
		k = sqrt(m);
		for (n = 2; n <= k; n++)
		{
			if (m%n == 0) break;
		}
		if (n>=k+1)
		{
			printf("%d  ", m);
			total += m;
		}
	}
	printf("总和为%d", total);
}

void main008()
{
	int m, k, i, s = 0;
	for (m = 2; m <= 500; m++) //………………………………..(1 分)
	{
		k = sqrt(m); //………………………………..(1 分)
			for (i = 2; i <= k; i++) //或 i<=m/2 ………………………………..(2 分)
				if (m%i == 0) //………………………………..(2 分)
					break;
		if (i >= k + 1) //或者 if(i>k) ………………………………..(2 分)
		{
			printf("%d ", m); //………………………………..(1 分)
				s = s + m; //………………………………..(1 分)
		}
	}
	printf("s=%d\n", s);
}

int method3(int arr[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d---%d---%d---%d\n", arr[0][i], arr[1][i], arr[2][i], arr[3][i]);
		arr[3][i] = (arr[0][i] + arr[1][i] + arr[2][i]) / 3;
		printf("%d\n", arr[3][i]);
		printf("%d---%d---%d---%d\n", arr[0][i], arr[1][i], arr[2][i], arr[3][i]);
	}
}

//void print_a(int a[][5], int n, int m) {
//	int i, j;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//}

void main010()
{
	/*int m = 0, n = 0, total = 0;
	scanf("%d%d", &m, &n);
	for (int i = m; i < n; i++)
	{
		if (i%2==0&&i%3==0)
		{
			total += i;
		}
	}
	printf("%d", total);*/
	/*int a[5][5] = { {1, 2}, {3, 4, 5}, {6}, {7}, {0, 8} };

	printf("\n方法1:\n");
	print_a(a, 5, 5);*/

	int arr[4][4] = { {10,20,30,40},{20,30,40,50},{30,40,50,60} };
	method3(arr);
}

void main0011()
{
	int c;
	while ((c = getchar()) != 0)
	{
		printf("--%d--\n", c - '2');
		switch (c - '2')
		{
		case 0:
		case 1:putchar(c + 4);
		case 2:putchar(c + 4); break;
		case 3:putchar(c + 3);
		default:putchar(c + 2); break;
		}
	}
}

void main0012()
{
	int i, b, k = 0;
	for (i = 1; i <= 5; i++)
	{
		b = i % 2;
		while (b-- >= 0) k++;
	}
	printf("%d   %d", k, b);
}

void main()
{
	int k = 0;
	char c = 'A';
	do 
	{
		switch (c++)
		{
		case 'A':k++; break;
		case 'B':k--;
		case 'C':k += 2; break;
		case 'D':k = k % 2; break;
		case 'E':k = k * 10; break;
		default:k = k / 3;
		}
		k++;
	} while (c < 'G');
	printf("%d", k);
}
