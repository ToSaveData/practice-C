#include <stdio.h>

int main()
{ int num;

printf("/%d/ \n", 12345);
printf("/%10d/ \n", 12345);
printf("/%-10d/ \n", 12345);
printf("/%010d/ \n\n", 12345);

printf("/%f/ \n", 12345.678);
printf("/%15f/ \n", 12345.678);
printf("/%15.2f/ \n", 12345.678);
printf("/%-15.2f/ \n", 12345.678);

printf("%d %#o %#x \n", 67, 67, 67);
printf("%d %#o %#x \n", 067, 067, 067);
printf("%d %#o %#x \n", 0x67, 0x67, 0x67);


return 0;

}