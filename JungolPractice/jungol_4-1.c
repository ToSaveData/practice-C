#include <stdio.h>

int main()
{
	int i, j, N, flag = 0;
	do
	{
		if (flag == 1)
			printf("INPUT ERROR\n");
		scanf("%d", &N);
		flag = 1;
	} while (N < 1 || N > 100 || N % 2 == 0);
	
	int arr[100][100];

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			arr[i][j] = 0;
		}
	}

	char a = 'A';

	for (i = N / 2; i >= 0; i--) {
		for (j = i; j < N - i; j++) {
			arr[j][i] = a++;
			if (a == 'Z' + 1)a = 'A';
		}
	}
	/* i = 2, i>= 2
	* j = 2 j < 5 - 2
	* arr[2][2] = A
	* a = B
	* 3 < 5-2 °ÅÁþ
	* i=1 1 >= 0
	* j=1 1<5-1
	* arr[1][1] = B
	* a = C
	* 2 < 5 - 1
	* arr[2][1] = C
	* a= D
	* 3 < 5-1
	* arr[3][1] = D
	* a=E
	* 4 < 5-1 °ÅÁþ
	* i=0 0 >= 0
	* j=0 0 < 5-0
	* arr[0][0] = E
	* a=F
	* 1 < 5-0
	* arr[0][1] = F
	* a = G
	* 

	*/

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (arr[i][j] == 0) printf(" ");
			else printf("%c ", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}