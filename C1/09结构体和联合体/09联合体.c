#include <stdio.h>

//����һ�������� �������ռ�õ��ֽڴ�СΪ �����������ʹ�С �˴�Ϊdouble ��Ϊ8
//����������ݶ�������ͬһ�ڴ��� ����ֻ�ܴ洢һ��ֵ
union MyUnion
{
	int a;
	char b;
	float c;
	double d;
};

int main09()
{
	union MyUnion vars;
	vars.a = 100;
	vars.b = '11';

	printf("%d\n", vars.a);
	return 0;
}