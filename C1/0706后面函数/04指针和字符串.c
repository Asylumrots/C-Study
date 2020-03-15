#include <stdio.h>

int main()
{
	char arr1[] = "helloworld";
	char *arr2 = "hellowordl";//可以如此不报错

	//但是
	arr1[0] = 't';
	arr2[0] = 't';//此处赋值报错

	return 0;
}