#include <stdio.h>

void funcA(int *ptr1,int *ptr2)
{
	int b, tmp;

	for (b = 0; b < 5; b++)
	{
		tmp = *ptr1; //tmp¿¡ ÁÖ¼Ò¿¡ ÀÖ´Â °ªÀ» ³Ñ°ÜÁÜ
		*ptr1 = *ptr2; //°ªÀ» µ¤¾î¾¸
		*ptr2 = tmp; // °ªÀ» µ¤¾î¾¸2
		ptr1++, ptr2++;
	}
}

int main()
{
	int a, c, *ptr1, *ptr2;
	int data1[5] = { 0,1,2,3,4 };
	int data2[5] = { 4,3,2,1,0 };
	ptr1 = data1;
	ptr2 = data2;

	for (a = 0; a < 5; a++)
	{
		printf("before : %d, %d\n", data1[a], data2[a]);
	}
	
	
	funcA(ptr1, ptr2);

	printf("\n");

	for (c = 0; c < 5; c++)
	{
		printf("after: %d, %d\n", data1[c],data2[c]);
	}

	return 0;
}