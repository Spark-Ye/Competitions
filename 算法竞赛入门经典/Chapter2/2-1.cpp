#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	for (i = 100; i < 1000; i++)
	{
		if (pow((i % 10), 3) + pow((i / 10 % 10), 3) + pow((i / 100), 3) == i)
			printf("%d ", i);
	}
	return 0;
}