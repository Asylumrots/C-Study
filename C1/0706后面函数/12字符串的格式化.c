#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>
//ע�����������ǻ��ڱ�׼����������

int main12()
{
	//��ʽ�����
	char arr[100];

	sprintf(arr, "pi��ֵ��%.2f", 3.1415926);

	printf("%s\n", arr);

	return 0;
}

int main1202()
{
	//��ʽ������
	char arr[]="1+2=�Ҳ�֪��";
	int a, b;
	char str[100];

	sscanf(arr, "%d+%d=%s", &a, &b, str);

	printf("%d\n%d\n%s\n", a, b, str);


	char arr2[] = "123456";
	int c, d;
	//sscanf(arr2, "%d%d", &c, &d);//����д����arr2��һ���������޷����ֵ���d�޷�������ֵ
	sscanf(arr2, "%3d%d", &c, &d);
	printf("%d\n%d", c, d);

	return 0;
}