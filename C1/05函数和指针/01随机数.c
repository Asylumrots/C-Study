#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main01()
{
	//�������������  ����time��stdlibͷ�ļ�
	srand((int)time(NULL));//��������ֱ��ʹ��randΪα����������չ�ʽ��������Ĺ̶��������
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", rand() % 10); //%10 0-9 %100 0-99 %1000 0-999
	}
	//%51+50 50-100

	return 0;
}