#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
	const double pi = acos(-1.0);
	int n;
	scanf("%d", &n);
	printf("%lf %lf\n", sin(PI * n / 180), sin(pi * n / 180));
	printf("%lf %lf\n", cos(PI * n / 180), cos(pi * n / 180));
	return 0;
}