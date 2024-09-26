#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a, b, c;
	while (~scanf("%d %d %d", &a, &b, &c))
	{
		int i, flag = 1;
		for (i = 11; i < 100; i++)
		{
			if (i % 3 == a && i % 5 == b && i % 7 == c)
			{
				printf("%d\n", i);
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("No answer\n");
	}
	return 0;
}