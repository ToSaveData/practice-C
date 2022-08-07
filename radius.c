#include <stdio.h>

int main()
{
	int radius;
	double PI;
	PI = 3.141592;

	printf("반지름 ? ");
	scanf("%d", &radius);

	printf("반지름이 %d인 원의 둘레 : %.2lf \n", radius, 2 * radius * PI);
	printf("반지름이 %d인 원의 넓이 : %.2lf \n", radius, radius * radius * PI);

	return 0;
}