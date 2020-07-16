#define _CRT_SECURE_NO_WARNINGS  //ºöÂÔÊäÈë´íÎó¾¯¸æ
#include <stdio.h>

int main0301()
{
	int arr[10] = { 5,6,8,2,4,12,0,1,9,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int time=0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			time++;
			if (arr[i] < arr[j])// <Îª½µĞò >ÎªÉıĞò
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("---%d\n", time);
	return 0;
}

int main0302()
{
	int arr[10] = { 5,6,8,2,4,12,0,1,9,3 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	int time = 0;

	for (int i = 0; i < 10-1; i++)
	{
		for (int j = 0; j < 10-i-1; j++)
		{
			time++;
			if (arr[j] < arr[j+1])//µ¹Ğò >Ë³Ğò
			{
				arr[j] = arr[j] + arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
			}
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("---%d\n", time);
	return 0;
}