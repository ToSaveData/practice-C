#include <stdio.h>

int main()
{
	int i, j, n, a, add, num, flag = 0;

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
	/*
	  0 1 2 3 4 5 6 7 8
	0 17
	1 18 10
	2 19 11 5
	3 20 12 6 2
	4 21 13 7 3 1 
	5 22 14 8 4
	6 23 15 9
	7 24 16
	8 25
	*/
	for (i = 0; i < n; i++)
	{	
		for (j = 0; j < n / 2; j++)
		{

		}
	}
	return 0;
}