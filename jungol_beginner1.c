#include <stdio.h>

int main()
{
	int i, j, a, b, flag = 0;
	int num1 = 1, num2 = 2, num3 = 3;
	do {
		if (flag == 1)
			printf("Input Error!!\n");

		scanf("%d %d", &a, &b);
		flag = 1;
	} while (a < 2 || a>9 || b < 2 || b>9);

	if (a >= b)
	{
		for (i = b; i <= a; b++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   %d * %d = %2d   %d * %d = %2d\n",
					a, num1, a * num1, a, num2, a * num2, a, num3, a * num3);
				num1 += 3;
				num2 += 3;
				num3 += 3;
			}
			num1 = 1, num2 = 2, num3 = 3;
			printf("\n");
			a--;
		}
	}
	else if(b > a)
	{
		for (i = b; i >= a; b--)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   %d * %d = %2d   %d * %d = %2d\n",
					a, num1, a * num1, a, num2, a * num2, a, num3, a * num3);
				num1 += 3;
				num2 += 3;
				num3 += 3;
			}
			num1 = 1, num2 = 2, num3 = 3;
			printf("\n");
			a++;
		}
	}
	return 0;
}