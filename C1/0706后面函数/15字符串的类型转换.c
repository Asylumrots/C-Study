#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr[] = "  123�ҿ���";

	//atoi ������Ҫ����stdlib.hͷ�ļ�
	//���Կո�������ſ�ʼ�������� ���������ֻ�\0ֹͣ 
	//����ǰ�б����ֹͣ ����0 ������ " asd 123�ҿ���"
	int n = atoi(arr);
	printf("%d\n", n); 

	char arr2[] = " 123.234����12322.223";
	float f = atof(arr2);
	printf("%f\n", f);

	double d = atof(arr2);
	printf("%lf\n", d);


	return 0;
}