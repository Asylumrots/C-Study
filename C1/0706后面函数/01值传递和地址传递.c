#include <stdio.h>

void testzhi(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	return;
}

void testdizhi(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//void testdizhi2(int *a, int *b)
//{
//	printf("%p-----%p\n", a, b);
//}


int main01()
{
	int a = 10, b = 20;

	testzhi(a, b);//ֵ���� �ββ�Ӱ��ʵ�ε�ֵ
	printf("%d---%d\n", a, b);

	testdizhi(&a, &b);//��ַ���� �βο���Ӱ��ʵ�ε�ֵ
	printf("%d---%d\n", a, b);

	return 0;
}