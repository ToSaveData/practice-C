#include <stdio.h>

int main()
{
	int n, i, j, num1=1, num2=65, flag = 0;

	do {
		if (flag == 1)
			printf("input error");
		scanf("%d", &n);
		flag = 1;
	} while (n < 0);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			if (i + j < n)
			{
				printf("%d ", num1);
				num1++;
			}
			else
			{
				printf("%c ", num2);
				num2++;
				
				if (num2 == 90)
					num2 = 65;
			}
		}
		printf("\n");
	}
	
	return 0;
}