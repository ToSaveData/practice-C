#include <math.h>
#include <stdio.h>

int main()
{
    int i, j, N, tmp;
    int sq; // N의 제곱근을 저장하기 위해
    int arr[4000] = { 0 }, cnt = 0; // N의 약수를 저장하기 위해

    scanf("%d", &N);
    if (N < 2 || N>2100000000)
    {
        printf("input error");
        return 0;
    }

    sq = sqrt(N); // N의 제곱근을 구하여 sq에 저장한다.
    for (i = 1; i <= sq; i++)
    {
        if (N % i == 0)
        {
            arr[cnt] = i; // 작은수 저장
            cnt++;

            if (N / i != i)
            arr[cnt] = N/i; // 큰수 저장 (작은수와 같지 않을 경우)
            cnt++;
        }
    }
    printf("%d", cnt);
    for (i = 0; i < cnt; i++)
       printf("\narr[%d] = %d ", i, arr[i]);

   for (i = 0; i < cnt-1; i++)
    {
       for (j = 0; j < cnt-1; j++)
       {
        if (arr[j] > arr[j + 1])
            {
            tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
            }
        }
    }

   for (i = 0; i < cnt; i++)
        printf("%d ", arr[i]);

    return 0;
}