#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int i, j, k, n;
	scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (k = 0; k < 2 * n - 1 - 2 * i; k++)
			printf("#");
		printf("\n");
	}
	return 0;
}