#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%.3f\n", (x + y + z) / 3.0);
	return 0;
}