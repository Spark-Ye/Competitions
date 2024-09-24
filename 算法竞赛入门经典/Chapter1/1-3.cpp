#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int n, m = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		m += i;
	}
	printf("%d\n", m);
	return 0;
}