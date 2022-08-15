#include <stdio.h>

int main()
{
	int a, b, b1, b2, b3, b4, flag = 0;
	
	do {
		if (flag == 1)
			printf("input error!!\n");
		scanf("%d %d", &a, &b);
		flag = 1;
	} while (a < 100 || a > 1000 || b < 100 || b > 1000);
	//472 385
	b1 = (b % 10) * a;
	b2 = ((b % 100) - (b % 10)) * a / 10;
	b3 = (b / 100) * a;
	b4 = b1 + b2 * 10 + b3 * 100;
	printf("%d\n%d\n%d\n%d\n", b1, b2, b3, b4);
	
	return 0;
}