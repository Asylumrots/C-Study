#include <stdio.h>
#include <string.h>

void my_strcat01(char *ch1,char *ch2)//�˴�����������Ϊ��ַ
{
	//printf("%p", ch1);
	//�˴���ͬ��strlen(ch1)
	int i = 0;
	while (ch1[i] != '\0')
	{
		i++;
	}

	int j = 0;
	while (ch2[j] != '\0')
	{
		ch1[i + j] = ch2[j];;
		j++;
	}
	ch1[i + j] = 0;//�˴����п��� ���涨��ch1ʱ����100 ���û����Ҫ��0��֤�ַ���

	/*printf("%d\n", i);
	printf("%d\n", strlen(ch1));*/

	return;
}

//ʹ��ָ��
void my_strcat(char *ch1, char *ch2)//�˴�����������Ϊ��ַ
{
	int i = 0;
	while (*(ch1+i) != '\0')
	{
		i++;
	}

	int j = 0;
	while (*(ch2 + j) != '\0')
	{
		*(ch1 + i + j) = *(ch2 + j);
		j++;
	}
	*(ch1+i+j) = 0;//�˴����п��� ���涨��ch1ʱ����100 ���û����Ҫ��0��֤�ַ���
	return;
}

int main02()
{
	char ch1[100] = "hello";
	char ch2[] = "world";

	my_strcat(ch1, ch2);

	printf("%s", ch1);
	return 0;

}