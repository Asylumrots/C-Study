#include <stdio.h>

int main02()
{
	//�ַ������ڴ���һ��������char����'\0'��β
	//char a[11] ����û��\0������	
	char a[] = "hello world";
	char b[] = "hello \0 world";
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b)); //4
	//%s��ʾ���һ���ַ��� ��\0ֹͣ
	printf("%s\n", a);
	printf("%s\n", b);
	return 0;
}