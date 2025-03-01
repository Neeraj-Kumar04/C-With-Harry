#include <stdio.h>
#include <stdlib.h>
/*
. Solve problem 1 using calloc()
*/
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 45;
    printf("%d \n", ptr[0]);

    return 0;
}