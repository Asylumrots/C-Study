#include <stdio.h>

int main()
{
	//���帡����
	float a = 3.14;
	double b = 3.14;

	//���������
	printf("%f\n", a);
	printf("%.2lf\n", b);


	//�ֽڴ�С
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));


	//%p���޷���ʮ�����Ƶ����ݲ鿴�ڴ��еĵ�ַ
	printf("%p\n", &a);
	printf("%p\n", &b);

	printf("%d\n", sizeof(int));
	return 0;
}
