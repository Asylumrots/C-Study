#include <stdio.h>

int main00001()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d+%d=%d ", j, i, j + i);
			if (j==i)
			{
				printf("\n");
				break;
			}
		}
	}

	return 0;
}