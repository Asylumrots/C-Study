#include <stdio.h>

int main()
{
	char arr1[] = "helloworld";
	char *arr2 = "hellowordl";//������˲�����

	//����
	arr1[0] = 't';
	arr2[0] = 't';//�˴���ֵ����

	return 0;
}