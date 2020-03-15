#define _CRT_SECURE_NO_WARNINGS  //ºöÂÔÊäÈë´íÎó¾¯¸æ
#include <stdio.h>

int main02()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size ; i++)
	{
		arr[i] = arr[i] + arr[size - 1];
		arr[size - 1] = arr[i] - arr[size - 1];
		arr[i] = arr[i] - arr[size - 1];
		size--;
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}