#include <stdio.h>
#include <string.h>

void inverse(char* ch)
{
	int i = 0;
	int j = strlen(ch) - 1;//strlen表示有效个数 减一为下标
	while (i<j)
	{
		char temp = ch[i];
		ch[i] = ch[j];
		ch[j] = temp;

		i++;
		j--;
	}
	return;
}

int main08()
{
	char arr[] = "hello world";
	inverse(arr);
	printf("%s\n", arr);
	return 0;
}