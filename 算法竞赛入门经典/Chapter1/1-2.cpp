#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	float f, c;
	scanf("%f", &f);
	c = 5 * (f - 32) / 9;
	printf("%.3f\n", c);
	return 0;
}