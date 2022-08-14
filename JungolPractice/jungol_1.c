#include <stdio.h>

int main()
{
	int n, m, num = 1, i, j, k, S, flag = 0;

	do {
		if (flag == 1)
			printf("input error!!");
		scanf_s("%d %d", &n, &m);
	} while (n < 0 || n>100 || m < 1 || m>3);

	switch (m)
	{
	case 1:
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
			printf("%d ", i);
			}
			printf("\n");
		}
		break;

	case 2:
		for (i = 1; i <= n; i++)
		{
			if(i % 2 == 1)
			for (j = 0; j < n; j++)
			{
				printf("%d ", num);
				num++;
			}
			
			else if (i % 2 == 0)
				for (j = 0; j < n; j++)
			{
				num--;
				printf("%d ", num);
			}
			printf("\n");
			
		}
		break;
	
	case 3:
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				S = j * num;
				printf("%d ", S);
			}
			num = i+1;
			printf("\n");
		}
		break;
	}

	return 0;
}