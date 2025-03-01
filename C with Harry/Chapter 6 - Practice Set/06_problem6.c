#include <stdio.h>
/*
Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.
*/
int main()
{
    int i = 5;
    int *ptr = &i;  //*ptr gives the value or points the integer i
    int **j = &ptr; //**j is storing the value of ptr
    printf("The address of i is %u\n", &i);
    printf("The value at address of i is %d\n", *ptr);

    printf("The address of j is %u\n", &j);
    printf("The value at address of j is %d\n", **j);
    return 0;
}