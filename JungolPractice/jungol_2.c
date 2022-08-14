#include <stdio.h>

int main()
{
	int n, i, j, flag = 0, num1, num2;

	do {
		if (flag == 1)
			printf("input error!!");
		scanf("%d", &n);
	} while (n < 0 || n>100);

	// A = 65, 알파벳 숫자 = 26
	/*
	* 1 14 15 2 3 16 17
	* 2 13 16 1 4 15 18
	* 3 12 17 26 5 14 19
	* 4 11 18 25 6 13 20
	* 5 10 19 24 7 12 21
	* 6 9  20 23 8 11 22
	* 7 8  21 22 9 10 23
	*/  
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			num1 = 65 + (((n * j + i) % 26) );
			num2 = 65 + (((n * (j + 1)- i - 1) % 26) );
			if (j % 2 == 0)
			{
				printf("%c ", num1);
			}	

			else if (j % 2 == 1)
			{
				printf("%c ", num2);
			}
		}
		printf("\n");
	}
	return 0;
}