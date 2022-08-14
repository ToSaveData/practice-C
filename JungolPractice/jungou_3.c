#include <stdio.h>

int main()
{
	int i, j, n, num1, num2, mul = 1, sub1 = 1, sub2 = 1, flag = 0;
	do {
		if (flag == 1)
			printf("input error!!");
		scanf("%d", &n);
		flag = 1;
	} while (n < 0 || n>100);
	/*
	  0 1 2 3 4
	0         A
	1       B F
	2     C G J
	3   D H K M
	4 E I L N O

	  0 1 2 3 4 => 5°³
	0         1
	1       2 6
	2     3 7 10
	3   4 8 11 13
	4 5 9 12 14 15

	*/
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			num1 = 65 + (i % 26);
			num2 = 65 + ((i + (mul * n) - sub2) % 26);
			if (i + j < n - 1)
			{
				printf("  ");
			}
			else if (i + j == n - 1)
			{
				printf("%c ", num1);
			}
			else if (i + j > n - 1)
			{
				printf("%c ", num2);
				sub1++;
				sub2 += sub1;
				mul++;
			}
		}
		sub1 = 1;
		sub2 = 1;
		mul = 1;
		printf("\n");
	}



	return 0;
}