#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>

int main04()
{
	int a, b;
	//scanf("%d%d", &a, &b);   //��������ʱ�������м��ÿո��ֱ�ӻس���������������

	//scanf("%d,%d", &a, &b);  //�����Զ���ָ���ʽ

	//scanf("%d\t%d", &a, &b);


	scanf("%3d%d", &a, &b); //�淶��λ�������� ���˺����b
	printf("%d===%d", a, b);

	return 0;
}