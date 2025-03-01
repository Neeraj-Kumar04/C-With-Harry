#include <stdio.h>
int main()
{
    int i = 8;
    int *j;                           //*j is a pointer
    j = &i;                           // j is an intejer stores the addres of i
    printf("address of i= %u\n", &i); //%u -->used for unsigned int --format specifierr
    printf("address of i= %u\n", j);
    printf("address of j= %u\n", &j);
    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));
    printf("value i= %d\n", *j);
    return 0;
}