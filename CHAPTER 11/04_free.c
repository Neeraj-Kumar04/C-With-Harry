#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("Enter the number: \n");

    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 3;
    free(ptr); // memory of ptr is released.
    printf("%d", ptr[0]);

    return 0;
}