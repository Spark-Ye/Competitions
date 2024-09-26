#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int n, m;
	while (~scanf("%d %d", &n, &m))
	{
		double sum = 0;
		if (n == 0)
			break;
		for (int i = n; i <= m; i++)
			sum += 1.0 / i / i;
		printf("%.5llf\n", sum);
	}
	return 0;
}