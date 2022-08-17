#include <stdio.h>

int main()
{
	int i, j, n, a, b, num, add = 0, sub = 0, flag = 0;
	
	do
	{
		if (flag == 1)
			printf("INPUT ERROR\n");
		scanf("%d", &n);
		flag = 1;
	} while (n < 1 || n > 100 || n % 2 == 0);

	a = n / 2;

	for (i = 0; i < n / 2; i++)
	{
		if (n - (2 * a) >= 1)
			add += n - (2 * a);
		a--;
	}

	b = (n / 2) * 2;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n / 2; j++)
		{
			if (i >= j)
			{
				if (j == 0)
				{
					num = 65 + ((add + i) % 26);
					printf("%c ", num);
				}
				else if (n - i - j > 0)
				{
					num = 65 + ((add + i + sub - b) % 26);
					sub -= b;
					printf("%c ", num);
					b -= 2;
				}
			}
		}
		printf("\n");
		b = (n / 2) * 2;
		sub = 0;
	}
	return 0;
}