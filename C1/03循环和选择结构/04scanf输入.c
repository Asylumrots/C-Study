#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>

int main()
{
	int a, b;
	//scanf("%d%d", &a, &b);   //��������ʱ�������м��ÿո��ֱ�ӻس���������������

	//scanf("%d,%d", &a, &b);  //�����Զ���ָ���ʽ

	//scanf("%d\t%d", &a, &b);


	scanf("%3d%d", &a, &b); //�淶��λ�������� ���˺����b
	printf("%d===%d", a, b);

	a = getchar();//����һ�������char�ַ�

	return 0;
}