#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>
#include <string.h>

int main11()
{
	char arr1[] = "helloworld";
	char arr2[] = "hellowworld";

	//�����ַ���������������ַ���ȣ��� ASCII ֵ��С��Ƚϣ���ֱ�����ֲ�ͬ���ַ����� \0 Ϊֹ
	/*�������ֵС�� 0�����ʾ str1 С�� str2��
	�������ֵ���� 0�����ʾ str1 ���� str2��
	�������ֵ���� 0�����ʾ str1 ���� str2��*/
	//a 97 A 65 0 48
	int value = strcmp(arr1, arr2);


	int value2 = strncmp(arr1, arr2, 2);


	printf("%d\n", value);
	printf("%d\n", value2);

	return 0;
}