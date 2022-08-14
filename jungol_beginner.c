#include <stdio.h>

int main()
{
	int i, j, a, b, flag = 0;
	do{
		if (flag == 1)
			printf("Input Error!!\n");
		scanf("%d %d", &a, &b);
		flag = 1;
	} while (a < 2 || a>9 || b < 2 || b>9);
	

	for (j=a;j<b;a++)
	{
		for (i = 0; i < 3; i++)
		{
			printf("%d * %d = %2d   %d * %d = %d   %d * %d = %2d", a, 3 * i + 1, a * (3 * i + 1), a, 3 * i + 2, a * (3 * i + 2), a, 3 * i + 3, a * (3 * i + 3));
		}
		printf("\n");
	}
	return 0;
}