#include <stdio.h>

//ȫ�ֺ��� ����Ŀ�������ļ��ж�����ʹ�� ���������Ǵӳ��򴴽������١�
void func3()
{
	printf("%s\n", "hello world!");
}

//��̬���� ֻ���ڱ��ļ��е��� ���������Ǵӳ��򴴽�������
//ͬһ����Ŀ�Ĳ�ͬ�ļ� ��̬��������������ͬ
static void func2()
{
	printf("%s\n", "hello world2!");
}

int main03()
{
	func3();
	func2();
	return 0;
}