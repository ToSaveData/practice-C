#include <stdio.h>

int main()
{
	int i, j, n, a, b, num1, num2, add = 0, sub = 0, mul = 0, flag = 0;

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
		num1 = 65 + ((add + i) % 26);
		for (j = 0; j < n; j++)
		{
			if (i >= j)
			{
				if (j == 0)
				{
					printf("%c ", num1);
				}
				else if (i == (n / 2) && j == (n / 2))
				{
					printf("%c ", 'A');
				}
				else if (n - i - j > 0)
				{
					num2 = 65 + ((add + i + sub - b) % 26);
					sub -= b;
					printf("%c ", num2);
					b -= 2;
				}
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
		b = (n / 2) * 2;
		sub = 0;
	}

	return 0;
}