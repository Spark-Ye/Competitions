#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int num;
	float cost = 95;
	scanf("%d", &num);
	cost *= num;
	if (cost >= 300)
		printf("%f", cost * 0.85);
	else
		printf("%f", cost);
	return 0;
}