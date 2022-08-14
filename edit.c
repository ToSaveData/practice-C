#include <stdio.h>

int main()
{
	int i, j, a, b, flag = 0;
	do {
		if (flag == 1)
			printf("Input Error!!\n");

		scanf("%d %d", &a, &b);
		flag = 1;
	} while (a < 2 || a>9 || b < 2 || b>9);

	if (a > b)
	{
		for (i = b - 1; i < a; b++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   %d * %d = %2d   %d * %d = %2d\n",
					a, 3 * j + 1, a * (3 * j + 1), a, 3 * j + 2, a * (3 * j + 2), a, 3 * j + 3, a * (3 * j + 3));
			}
			printf("\n");
			a--;
		}
	}
	else
	{
		for (i = a; i < b + 1; b--)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   %d * %d = %2d   %d * %d = %2d\n",
					a, 3 * j + 1, a * (3 * j + 1), a, 3 * j + 2, a * (3 * j + 2), a, 3 * j + 3, a * (3 * j + 3));
			}
			printf("\n");
			a++;
		}
	}
	return 0;
}