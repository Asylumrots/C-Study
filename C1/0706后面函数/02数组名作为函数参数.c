#include <stdio.h>
#include <string.h>

void my_strcat01(char *ch1,char *ch2)//此处传递数组名为地址
{
	//printf("%p", ch1);
	//此处等同于strlen(ch1)
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
	ch1[i + j] = 0;//此处可有可无 下面定义ch1时给了100 如果没有需要加0保证字符串

	/*printf("%d\n", i);
	printf("%d\n", strlen(ch1));*/

	return;
}

//使用指针
void my_strcat(char *ch1, char *ch2)//此处传递数组名为地址
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
	*(ch1+i+j) = 0;//此处可有可无 下面定义ch1时给了100 如果没有需要加0保证字符串
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