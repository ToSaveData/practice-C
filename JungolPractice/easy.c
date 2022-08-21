//#include <stdio.h>
//
//int main()
//{
//	int n, i, j, num1=1, num2=65, flag = 0;
//
//	do {
//		if (flag == 1)
//			printf("input error");
//		scanf("%d", &n);
//		flag = 1;
//	} while (n < 0);
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n + 1; j++)
//		{
//			if (i + j < n)
//			{
//				printf("%d ", num1);
//				num1++;
//			}
//			else
//			{
//				printf("%c ", num2);
//				num2++;	
//			}
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

#include <stdio.h>

int main()
{
	int i, j, n;
	char tmp1 = 1;
	char tmp2 = 'A';

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf("%d ", tmp1++);
		}
		for (j = 1; j <= i + 1; j++)
		{
			printf("%c ", tmp2++);
		}
		printf("\n");
	}

	return 0;
}
