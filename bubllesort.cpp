#include <stdio.h>

int funcA(int ptr1, int pt2);

int funcA(int ptr1,int ptr2)
{
	int tmp,c;

	for (c = 0; c < 5; c++)
	{
		tmp = ptr1;
		ptr1 = ptr2;
		ptr2 = tmp;

		ptr1++, ptr2++;
	}
	return ptr1, ptr2;
}

int main()
{
	int a, b, *ptr1, *ptr2;
	int i[5] = { 0,1,2,3,4 };
	int j[5] = { 4,3,2,1,0 };
	ptr1 = i;
	ptr2 = j;

	for (a = 0; a < 5; a++)
	{
		printf("before : %d, %d\n", i[a], j[a]);

	}
	
	funcA(*i, *j);

	printf("\n");

	for (b = 0; b < 5; b++)
	{
		printf("after: %d, %d\n", i[b],j[b]);
	}

	return 0;
}