#include <stdio.h>

int main()
{
	int radius;
	double PI;
	PI = 3.141592;

	printf("������ ? ");
	scanf("%d", &radius);

	printf("�������� %d�� ���� �ѷ� : %.2lf \n", radius, 2 * radius * PI);
	printf("�������� %d�� ���� ���� : %.2lf \n", radius, radius * radius * PI);

	return 0;
}