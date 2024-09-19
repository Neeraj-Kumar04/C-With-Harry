/*
Following function are available in C to perform dynamic memory allocation:
1. malloc()
2. calloc()
3. free()
4. realloc()
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("Enter the number: \n");

    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); // malloc returns null pointer ,here we cast into integer

    // int arr[n];//Not allowed in c
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    return 0;
}