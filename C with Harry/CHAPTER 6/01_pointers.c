#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // j is a pointer pointing to i(j is an integer pointer )
    int k = 67;
    printf("The address of i is %p", &i);   //%p -->Format specifier for pointer
    printf("\nThe address of i is %p", j);  //%p -->Format specifier for pointer
    printf("\nThe address of i is %p", &k); //%p -->Format specifier for pointer

    printf("\nThe value at address j is %d", *(&i)); //  * --->star shows the value at that address
    return 0;
}