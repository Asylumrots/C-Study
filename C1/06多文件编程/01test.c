#include <stdio.h>
#include "test.h"

int main()
{
	printf("%d", max(10, 20));
	return 0;
}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}