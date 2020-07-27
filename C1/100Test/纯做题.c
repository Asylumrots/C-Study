#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <math.h>
#include <string.h>

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

void main0013()
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

void main0014()
{
	/*char a[5] = "abcde";
	for (size_t i = 0; i < 5; i++)
	{
		printf("%c\n", a[i]);
	}*/
	int a = 0, b = 2;
	if (a&b++)
	{
		printf("111\n");
	}
	printf("%d,%d", a, b);
}

void main0015()
{
	char a1[5], a2[5], a3[5], a4[5];
	scanf("%s%s", a1, a2);
	gets(a3); gets(a4);
	puts(a1); puts(a2); puts(a3); puts(a4);
}

void main0016()
{
	int j, c;
	char n[2][4 + 1] = { "8980","9198" };
	for (j = 4-1; j >=0; j--)
	{
		c = n[0][j] + n[1][j] - 2 * '0';
		printf("==%d  %d   %d\n", n[0][j], n[1][j],c);
		n[0][j] = c % 10 + '0';
		printf("===%c\n", n[0][j]);
	}
	for (int i = 0; i <= 1; i++)
	{
		puts(n[i]);
	}
}

int isLower(char ch[]) 
{
	int total = 0;
	printf("%d\n", strlen(ch));
	for (int m = 0; m <= strlen(ch); m++)
	{
		if (ch[m] >= 'a'&& ch[m]<='z')
		{
			total++;
		}
	}
	return total;
}

void main0017()
{
	char ch[100];
	scanf("%s", ch);
	printf("%d", isLower(ch));
}

void main0018()
{
	int a[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
}

void main0019()
{
	//int *p, m = 5, n;
	////scanf("%d", &n);
	////*p = n;
	//p = &n;
	//*p = m;
	/*char* s;
	s = "abcde";
	printf("%s", s);*/
}

void main0020() {
	char c1, c2;
	scanf("%c", &c1);
	while (c1 < 65 || c1>90) scanf("%c", &c1);
	c2 = c1 + 32;
	printf("%c,%c\n", c1, c2);
}

void main0021()
{
	printf("%d", 1 & 2);
}

int main0022()
{
	int a, b, t, r, n;
	printf("请输入两个数字：\n");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		t = b; b = a; a = t;
	}
	r = a % b;
	n = a * b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	printf("这两个数的最大公约数是%d，最小公倍数是%d\n", b, n / b);

	return 0;
}

void method333(float a)
{
	printf("%f", a);
}

void main0023()
{
	int a = 3;
	method333(a);
}

void main0024()
{
	int a = 235;
	int g = a % 10;
	int s = a / 10%10;
	int b = a / 100;
	printf("%d---%d---%d", b, s, g);
}

void fun(int x, int *y) {
	printf("%d,%d", x, *y);
}

void main0025()
{
	int x = 3, y = 4;
	fun(x, &y);
}

void main0026() {
	int i, j, n;
	for (i = 1; i <= 9; i++) {
		// 将下面的for循环注释掉，就输出左下三角形
		/*for (n = 1; n <= 9 - i; n++)
			printf("        ");*/

		for (j = 1; j <= i; j++)
			printf("%d*%d=%2d  ", i, j, i*j);

		printf("\n");
	}
}

void main0027()
{
	char a[100] = "12345678";
	int b = 12345678;
	printf("%10s\n", a);
	printf("%5d", b);
}

void main0028()
{
	int a = 0;
	char *s = "\ta\018bc";
	for (; *s != '\0'; s++) { printf("*"); a++; };
	printf("");

}

void main0029()
{
	int m = 10, n = 20;
	char *format = "%s, m=%d, n=%d\n";
	m *= n;
	printf(format, "m*=n", m, n);
}

void funccc(int *a, int i, int j)
{
	int t;
	if (i < j)
		{ t = a; a = a[j]; a[j] = t;
		i++; j--;
		fun(a,i,j);
		}
		
}
void main0030()
{
	int x[] = { 2,6,18 }, i;
	funccc(x, 0, 3);
	for (i = 0; i < 4; i++) printf("%2d", x);
	 printf("\n");
}

void main0031()
{
	double d = 3.2; 
	int x, y;
	x = 1.2; 
	y = (x + 3.8) ;
	y /= 5.0;
	printf("%d \n", d*y);
	
}

#define MA(x) x*(x-1)
union U
	{
	char st[4];
	int i;
	long l;
};
struct A
{
	int c;
	union U u;
}a;

main0032()
{
	/*int a = 1, b = 2; printf("%d \n", MA(1 + a + b));
	printf("%d \n", 1 + a + b*(1+a+b-1));*/
	printf("%d===%d", sizeof(union U), sizeof(a));
}

char *f(char *str)
{
	return str = "fun";
}
void main()
{
	char *str = "one";
}

